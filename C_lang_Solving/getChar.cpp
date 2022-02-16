#define _CRT_CECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;

	while (1)
	{
		printf("Current count is %d. Continue? (yes/no)\n", count);

		int c = getchar();

		if (c == 'n')
			break;
		else if (c == 'y') 
			count++;
		else
			printf("Please input yes or no \n");

		while (getchar() != '\n')
			continue;
	}

	return 0;
}