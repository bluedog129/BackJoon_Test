#include <stdio.h>

int num[1000001] = { 0 };

int main()
{
    int n = 0;
    int min = 1000000;
    int max = -1000000;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("%d %d", min, max);

    return 0;
}