#include <stdio.h>

int main() {
	int A, B, C;
	int arr[3] = { 0 };
	int Max = 0;
	int temp = 0;
	scanf_s("%d %d %d", &A, &B, &C);

	arr[0] = A;
	arr[1] = B;
	arr[2] = C;

	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (arr[j] > Max) {
				Max = arr[j];
				temp = arr[i];
				arr[i] = Max;
				arr[j] = temp;
			}
		}
	}

	printf("%d", arr[1]);
}