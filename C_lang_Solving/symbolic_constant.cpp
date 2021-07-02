//#define _CRT_SECURE_NO_WARNiNGS
#include <stdio.h>

int main() {

	float radius, area;

	printf("Input radius\n");

	scanf("%f", &radius);

	area = 3.141592f * radius * radius; // area = pi*r*r
	circum = 2.0 * 3.141592f * radius; // circum = 2.0 * pi * r

	printf("Area is %f\n", area);

	return 0;
}