#include <iostream>

using namespace std;

struct Mystruct
{
	int i;
	float f;
};


int main() {

	int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	cout << int_size1 << '\n';
	cout << int_size2 << '\n';
	cout << int_size3 << '\n';
	cout << float_size;

	return 0;
}