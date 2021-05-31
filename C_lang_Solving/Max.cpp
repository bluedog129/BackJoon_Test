#include <stdio.h>

int main() {
	int num[9] = { 0 };
	int max = 0;
	int maxNum = 0;

	for (int i = 1; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 1; i < 10; i++) {
		if (num[i] > max) {
			max = num[i];
			maxNum = i;
		}
	}

	printf("%d", max); printf("\n");
	printf("%d", maxNum);

	return 0;
}