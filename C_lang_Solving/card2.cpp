#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n = 0;

	cin >> n;
	queue<int> q;
	// queue�� n���� ī�带 1������ n������ push()
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	// 1. first�� pop()
	// 2. first���� back�� push() �׸��� �ٽ� first�� pop()
	// 1 - 2 �� size 1���� �ݺ�
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