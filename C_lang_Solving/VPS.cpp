#include <iostream>
#include <string>

using namespace std;

string valid(string s) {
    // 스택의 크기
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        // 여는 괄호는 push.
        if (s[i] == '(') {
            cnt += 1;
        }
        // 닫는 괄호는 pop
        else {
            cnt -= 1;
        }
        // cnt가 0보자 작다는 것은 )닫는 괄호보다 (여는 괄호가 부족하다는 의미
        if (cnt < 0) {
            return "NO";
        }
    }
    // 스택이 비어있다는 것은 올바른 괄호(VPS)임을 의미
    if (cnt == 0) {
        return "YES";
    }
    // 이 경우는 ')'가 '('보다 부족하다는 의미
    else {
        return "NO";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << valid(s);
    }
    return 0;
}