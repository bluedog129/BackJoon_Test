#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	while (1) {
		cin >> a >> b >> c;
		// 0,0,0 탈출 조건
		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		// 가장 큰 값을 b로 만든다. (빗변을 b로)
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

		// right 조건
		if (b * b == a * a + c * c) {
			cout << "right" << '\n';
		}
		// wrong 조건
		else {
			cout << "wrong" << '\n';
		}
	}
}