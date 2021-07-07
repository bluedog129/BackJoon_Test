#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    // 입출력 버퍼 : 입력 함수를 통해 입력 받는 데이터는 프로그램에 바로 읽혀지는 것이 아니라 먼저 입력 버퍼에 저장된후 다시
    //               그 입력버퍼의 내용이 프로그램에 전달된다. 출력함수 또한 출력 버퍼에 저장되었다가 모니터로 출력된다.

    // ios_base::sync_with_stdio(false) : c++로 알고리즘을 풀 때 실행 속도를 높이기 위해 쓰는 구문
    // c의 stdio와 c++ iostream의 동기화를 비 활성화시켜 버퍼의 사용을 줄여서 딜레이발생을 줄임
    // c의 버퍼와 병행하여 사용할 수 없게 되지만, 사용하는 버퍼의 시간이 줄어들었기 때문에 실행속도는 빨라짐
    ios_base::sync_with_stdio(false);

    // cin.tie(null) : cin과 cout의 묶음을 풀어줌
    // 기본적으로 cin으로 읽을 때 먼저 출력 버퍼를 비우는데, 마찬가지로 알고리즘을 풀 때는 화면에 바로 보이는 것이 중요하지 않다, 
    // 따라서 입력과 출력을 여러 번 번갈아가며 반복해야 하는 경우 필수적으로 cin.tie(null); 코드를 추가해야한다.
    cin.tie(nullptr);

    int t;
    cin >> t;
    // cin.ignore()이 있어야 t를 입력받을 때 입력버퍼에 남아 있던 \n가 getline()으로 전달되지 않는다.
    // 즉 cin.ignore()는 int형 변수가 담지 못해서 입력버퍼 남아있던 \n을 비워주는 역할을 한다.
    cin.ignore();


    while (t--) {
        string str;
        // getline() : 공백까지 포함하여 문자열을 입력할때 사용하는 함수
        // (마지막으로 입력받은 시점으로 부터 개행문자가 나올 때까지 입력받음)
        getline(cin, str);
        // 문자열 뒤에 항상 개행문자를 추가
        str += '\n';
        stack<char> s;
        for (char ch : str) {
            // 띄어쓰기나 개행문자가 나오면 top()을 이용해서 역순으로 문자열 출력 
            if (ch == ' ' || ch == '\n') {
                while (!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                cout << ch;
            }
            // 문자가 들어오면 push로 top에 문자 추가
            else {
                s.push(ch);
            }
        }
    }
    return 0;
}