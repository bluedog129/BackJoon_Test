#include <stdio.h>
#include <math.h>

int main()
{
	int A = 0, B = 0, C = 0;
	int result = 0;
	int arr[8] = { 0 };
	int score[10] = { 0 }; // 0~9 까지

	//150, 266, 427 입력
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	result = A * B * C;
	//result = 17037300

	//arr[]에 맞는 수가 들어가게끔
	//result의 각 자리수를 어떻게 구분하는지?
	//result의 각 자리수는 pow(10, i) % 10 으로 구분한다.
	//그리고 구분한 값을 자리에 맞게 arr[]에 넣는다.
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