#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	while (1) {
		cin >> a >> b >> c;
		// 0,0,0 Ż�� ����
		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		// ���� ū ���� b�� �����. (������ b��)
		int temp = 0;

		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}
		if (c > b) {
			temp = b;
			b = c;
			c = temp;
		}

		// right ����
		if (b * b == a * a + c * c) {
			cout << "right" << '\n';
		}
		// wrong ����
		else {
			cout << "wrong" << '\n';
		}
	}
}