#include <stdio.h>

//Á¶°Ç
//N <= 1000  ,  grade[] <= 100 && grade[] >= 0

int main() {
	int M = 0;
	int N = 0;
	int grade[1000] = { 0 };
	float sum = 0;
	float everage = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &grade[i]);
		if (grade[i] > M) {
			M = grade[i];
		}
	}
	
	for (int i = 0; i < N; i++) {
		grade[i] = (grade[i] / M) * 100;
		sum += grade[i];
	}

	everage = (float)sum / N;

	printf("%.10f", everage);

	return 0;
}