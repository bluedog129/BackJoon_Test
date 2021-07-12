#include <stdio.h>

int main() {
	int C = 0; // 테스트 케이스 갯수
	int N = 0; // 학생의 수
	
	scanf("%d", &C);
	
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);

		int sum = 0;
		int score[1000] = { 0 }; // 점수
		double everage = 0.00;

		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		// 1. 평균을 때린다.
		everage = (double)sum / N;

		// 2. 평균보다 점수가 높은 애들 퍼센트를 낸다.
		int cnt = 0; // 평균보다 점수 높은애들 수 세는 변수
		for (int j = 0; j < N; j++) {
			if (everage < score[j]) {
				cnt++;
			}
		}
		printf("%.3f%%\n", (double)cnt * 100 / N);
	}
	return 0;
}