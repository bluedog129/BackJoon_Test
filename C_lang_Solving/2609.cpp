#include <iostream>

using namespace std;
/*
solution 1
int gcd(int a, int b) {
	int g = 1;

	for (int i = 2; i <= min(a, b); i++) {
		if (a % i == 0 && b % i == 0) {
			g = i;
		}
	}

	return g;
} */
// solution 2
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}


int main() {
	int n1 = 0, n2 = 0;

	cin >> n1 >> n2;

	int g = gcd(n1, n2);

	cout << g << '\n' << n1 * n2 / g << '\n';

	return 0;
}