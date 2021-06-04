#include <stdio.h>

int main() {
	int num[10] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
		num[i] = num[i] % 42;
	}

	for (int j = 0; j < 42; j++) {
		for (int k = 0; k < 10; k++) {
			if (j == num[k]) {
				cnt++;
				break;
			}
		}
	}

	printf("%d", cnt);
	return 0;
}