#include <stdio.h>
#include <math.h>

int main()
{
	int A = 0, B = 0, C = 0;
	int result = 0;
	int arr[9] = { 0 }; // result의 각 자릿수에 들어갈 수를 넣을 변수
	int score[10] = { 0 }; // 0~9 까지

	//150, 266, 427 입력
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	//result = 17037300
	result = A * B * C;
	
	//result 자릿수를 count변수에 저장
	int num = result;
	int count = 0;
	do {
		num = (int)(num / 10);
		count++;
	} while (num > 0);

	// arr[]에 해당하는 값을 넣는다.
	for (int i = 0; i < count; i++) {
		arr[i] = (int)(result) % 10;
		result = result / 10;
	}

	// arr[]의 각 자리수의 값 만큼 score에 저장
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < count; j++) {
			if (arr[j] == i) {
				score[i]++;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d \n", score[i]);
	}
	
	return 0;
}