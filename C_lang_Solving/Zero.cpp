#include <iostream>
#include <stack>

using namespace std;

int main() {
	int k = 0;
	int sum = 0;
	stack<int> s;

	cin >> k;

	// 1. k줄에 따라 하나의 값을 스택에 넣는다.
	// 2. 0 이 나오면 가장 최근 입력된 값을 삭제한다.
	for (int i = 0; i < k; ++i) {
		int num = 0;
		cin >> num;

		// 1,2 번 수행
		if (num != 0) {
			s.push(num);
		}
		else {
			s.pop();
		}
	}

	// 스택값이 빌때까지 pop()해주는 반복문을 돌려서 sum에 top값을 넣어준다
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	
	cout << sum << endl;

	return 0;
}