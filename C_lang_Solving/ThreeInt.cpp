#include <stdio.h>

int main() {
	int A, B, C;
	int arr[3] = { 0 };
	int temp = 0;
	scanf_s("%d %d %d", &A, &B, &C);

	arr[0] = A;
	arr[1] = B;
	arr[2] = C;

	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			// j번째가 i 번째보다 큰 조건
			if (arr[j] > arr[i]) {
				// 수가 더 큰 j인덱스 값과 원래 i인덱스 위치를 서로 바꿔준다.
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("%d", arr[1]);
}