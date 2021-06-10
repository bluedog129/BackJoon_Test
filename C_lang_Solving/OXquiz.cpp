#include <stdio.h>
#include <string.h>

int main() {
	int input = 0;
	char OX[81] = { 0 };
	int size = strlen(OX);


	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf_s("%s", OX, sizeof(OX));

		int count = 0;
		int sum = 0;

		for (int j = 0; j < size; j++) {
			if (OX[i] == 'O') {
				count++;
			}
			else if (OX[i] == 'X') {
				count = 0;
			}
			sum += count;
		}
		printf("%d\n", sum);
	}

	return 0;
}