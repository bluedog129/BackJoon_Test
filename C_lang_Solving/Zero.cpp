#include <iostream>
#include <stack>

using namespace std;

int main() {
	int k = 0;
	int sum = 0;
	stack<int> s;

	cin >> k;

	// 1. k�ٿ� ���� �ϳ��� ���� ���ÿ� �ִ´�.
	// 2. 0 �� ������ ���� �ֱ� �Էµ� ���� �����Ѵ�.
	for (int i = 0; i < k; ++i) {
		int num = 0;
		cin >> num;

		// 1,2 �� ����
		if (num != 0) {
			s.push(num);
		}
		else {
			s.pop();
		}
	}

	// ���ð��� �������� pop()���ִ� �ݺ����� ������ sum�� top���� �־��ش�
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	
	cout << sum << endl;

	return 0;
}