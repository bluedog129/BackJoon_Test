#include <stdio.h>

//Á¶°Ç
//N <= 1000  ,  grade[] <= 100 && grade[] >= 0


int main() {
	int M = 0;
	int N = 0;
	double grade[100] = { 0 };
	double sum = 0;
	double everage = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%f", &grade[i]);
		if (grade[i] > M) {
			M = grade[i];
		}
	}
	
	for (int i = 0; i < N; i++) {
		grade[i] = (grade[i] / M) * 100;
		printf("%.2lf\n", grade[i]);
		sum += grade[i];
	}

	everage = (float)sum / N;

	printf("%.2lf\n", everage);

	return 0;
}