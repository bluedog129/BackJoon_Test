#include <stdio.h>
#include <math.h>

int main()
{
	int A = 0, B = 0, C = 0;
	int result = 0;
	int arr[9] = { 0 }; // result�� �� �ڸ����� �� ���� ���� ����
	int score[10] = { 0 }; // 0~9 ����

	//150, 266, 427 �Է�
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	//result = 17037300
	result = A * B * C;
	
	//result �ڸ����� count������ ����
	int num = result;
	int count = 0;
	do {
		num = (int)(num / 10);
		count++;
	} while (num > 0);

	// arr[]�� �ش��ϴ� ���� �ִ´�.
	for (int i = 0; i < count; i++) {
		arr[i] = (int)(result) % 10;
		result = result / 10;
	}

	// arr[]�� �� �ڸ����� �� ��ŭ score�� ����
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