#include <stdio.h>
#include <math.h>

int main()
{
	int A = 0, B = 0, C = 0;
	int result = 0;
	int arr[8] = { 0 };
	int score[10] = { 0 }; // 0~9 ����

	//150, 266, 427 �Է�
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	result = A * B * C;
	//result = 17037300

	//arr[]�� �´� ���� ���Բ�
	//result�� �� �ڸ����� ��� �����ϴ���?
	//result�� �� �ڸ����� pow(10, i) % 10 ���� �����Ѵ�.
	//�׸��� ������ ���� �ڸ��� �°� arr[]�� �ִ´�.
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		arr[i] = (int)(result / pow(10, 7 - i)) % 10;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] == 1) {
			score[1] += 1;
		}
		if (arr[i] == 2) {
			score[2] += 1;
		}
		if (arr[i] == 3) {
			score[3] += 1;
		}
		if (arr[i] == 4) {
			score[4] += 1;
		}
		if (arr[i] == 5) {
			score[5] += 1;
		}
		if (arr[i] == 6) {
			score[6] += 1;
		}
		if (arr[i] == 7) {
			score[7] += 1;
		}
		if (arr[i] == 8) {
			score[8] += 1;
		}
		if (arr[i] == 9) {
			score[9] += 1;
		}
		if (arr[i] == 0) {
			score[0] += 1;
		}
	}

	for (int i = 0; i < sizeof(score) / sizeof(int); i++) {
		printf("%d", score[i]); printf("\n");
	}

	return 0;
}