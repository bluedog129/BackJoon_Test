#include <stdio.h>

int main() {
	int M = 0;
	int N = 0;
	int num[] = { 0 };
	int sum = 0;
	int everage = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num[i]);
		if (num[i] > M) {
			M = num[i];
		}
		sum += num[i];
	}
	
	everage = sum / M * 100 / N;

	printf("%d", everage);

}