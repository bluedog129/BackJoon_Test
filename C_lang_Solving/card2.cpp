#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n = 0;

	cin >> n;
	queue<int> q;
	// queue에 n장의 카드를 1번부터 n번까지 push()
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	// 1. first를 pop()
	// 2. first값을 back에 push() 그리고 다시 first값 pop()
	// 1 - 2 를 size 1까지 반복
	while (q.size() > 1) {
		// 1
		q.pop();
		// 2
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << '\n';

	return 0;
}