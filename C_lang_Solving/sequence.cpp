#include <stdio.h>

// �˾Ƴ��� �ϴ� ��
// 1. �Է� ����
// 2. A[] �迭�� ����

int main() {
	int N = 0;
	int X = 0;
	int A[] = { 0 };

	scanf_s("%d", &N);
	scanf_s("%d", &X);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}

	for (int i = 0; i < N; i++) {
		if (A[i] < X) {
			printf("%d", X);
		}
	}
}