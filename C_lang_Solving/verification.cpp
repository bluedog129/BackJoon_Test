#include <stdio.h>

int doub(int n) {
	n = n * n;

	return n;
}

int main() {
	int inputNum[5] = { 0 };
	int sum = 0;
	int unique = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &inputNum[i]);
		if (inputNum[i] > 0 && inputNum[i]<10) {
			sum += doub(inputNum[i]);
		}
	}

	unique = sum % 10;

	printf("%d", unique);
}