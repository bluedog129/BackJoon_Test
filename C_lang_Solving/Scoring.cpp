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
	
	// arr[]�� �ش��ϴ� ���� �ִ´�.
	for (int i = 0; i < 9; i++) {
		// pow(a,b) == a�� b����
		arr[i] = (int)(result / pow(10, 8 - i)) % 10;
	}

	// arr[]�� �� �ڸ����� �� ��ŭ score�� ����
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
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