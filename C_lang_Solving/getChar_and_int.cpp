#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char c;
	int rows, cols;

	while ((c = getchar()) != '\n') {
		scanf("%d %d", &rows, &cols);
		while (getchar() != '\n') continue;
		display(c, rows, cols);
	}

	return 0;
}

void display(char cr, int lines, int width) {
	int rows, cols;

	for (rows = 0; rows < lines; rows++) {
		for (cols = 0; cols < width; cols++) {
			putchar(cr);
		}
		putchar('\n');
	}
}