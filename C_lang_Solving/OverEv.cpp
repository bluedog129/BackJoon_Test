#include <stdio.h>

int main() {
	int C = 0; // �׽�Ʈ ���̽� ����
	int N = 0; // �л��� ��
	
	scanf("%d", &C);
	
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);

		int sum = 0;
		int score[1000] = { 0 }; // ����
		double everage = 0.00;

		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		// 1. ����� ������.
		everage = (double)sum / N;

		// 2. ��պ��� ������ ���� �ֵ� �ۼ�Ʈ�� ����.
		int cnt = 0; // ��պ��� ���� �����ֵ� �� ���� ����
		for (int j = 0; j < N; j++) {
			if (everage < score[j]) {
				cnt++;
			}
		}
		printf("%.3f%%\n", (double)cnt * 100 / N);
	}
	return 0;
}