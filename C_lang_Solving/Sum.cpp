#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n[100] = {0};
	int input = 0;
	int sum = 0;

	scanf("%d", n);


	for (int i = 0; i < sizeof(n); i++) {
		scanf("%d", &input);
		sum += input;
	}

	printf("%d", sum);
}