#include <stdio.h>

int main() {
	int M = 0;
	int N = 0;
	int score[1000];
	double sum = 0;
	double newScore[1000];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		if (score[i] > M) {
			M = score[i];
		}
	}
	
	for (int i = 0; i < N; i++) {
		newScore[i] = (double)score[i] / (double)M * 100;
		sum += newScore[i];
	}

	printf("%.4lf\n", (double)(sum / N));

	return 0;
}