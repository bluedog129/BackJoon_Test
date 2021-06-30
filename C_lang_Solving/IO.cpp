#include <iostream>

int main()
{
	char fruit_name[40];

	printf("what is your farovate fruit?\n");

	std::cin >> fruit_name;

	printf("You like %s!\n", fruit_name);

	return 0;
}