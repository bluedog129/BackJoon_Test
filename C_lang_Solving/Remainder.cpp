#include <stdio.h>

int main() {
	int num[10] = { 0 };
	int Cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
			scanf_s("%d", &num[i]);
			if (num[i] == 1) {

			}
		}
		

		printf("%d", Cnt);
	}

	
}