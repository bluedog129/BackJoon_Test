#include <stdio.h>

// 알아내야 하는 것
// 1. 입력 범위
// 2. A[] 배열의 범위

int main() {
	int N = 0;
	int X = 0;

	scanf_s("%d %d", &N, &X);

	int A[1000] = { 0 };

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}

	for (int i = 0; i < N; i++) {
		if (A[i] < X) {
			printf("%d ", A[i]);
		}
	}
}