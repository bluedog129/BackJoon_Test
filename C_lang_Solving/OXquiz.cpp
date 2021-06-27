#include <stdio.h>
#include <string.h>

int main() {
    int input = 0;
    char OX[80];

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        scanf("%s", OX);

        int count = 0;
        int sum = 0;
        for (int j = 0; j < strlen(OX); j++) {

            if (OX[j] == 'O') {
                count++;
                sum += count;
            }
            else {
                count = 0;
            }

        }
        printf("%d\n", sum);
    }

    return 0;
}