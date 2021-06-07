#include <stdio.h>

int main() {
	int input = 0;
	char OX[100] = { 0 };
	int count = 0;
	int sum = 0;

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf_s("%s", OX,sizeof(OX));
		
		if (OX[i] == 'O') {
			count++;
		}
		else if (OX[i] == 'X') {
			count = 0;
		}

		sum += count;

		printf("%d\n", sum);
	}
}