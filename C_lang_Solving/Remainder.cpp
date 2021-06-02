#include <stdio.h>

int main() {
	int num[10] = { 0 };
	int Cnt = 0;
	int rmd = 0;
	int rmdArr[10] = { 0 };
	for (int z = 0; z < 3; z++) {
		// 전체 3번 반복
		for (int n = 0; n < 10; n++) {
			//10개의 정수를 입력받음
			scanf_s("%d", &num[n]);
		}
		for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
			for (int j = 0; j < sizeof(num) / sizeof(int); j++) {
				// rmd = num[]에 42를 나눈 나머지값
				rmdArr[j] = num[j] % 42;
				// 
				rmd = rmdArr[j];

				if (rmdArr[i] == rmd) {

				}
			}
			printf("%d", Cnt);
		}
	}
}