//#define _CRT_SECURE_NO_WARNiNGS
#include <stdio.h>
// 기호적 상수
#define PI 3.141592f
#define AI_NAME "Jarvis"

int main() {

	float radius, area, circum;
	
	printf("Hi I'm %s.\n", AI_NAME);
	printf("Input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius; // area = pi*r*r
	circum = 2.0 * PI * radius; // circum = 2.0 * pi * r

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	return 0;
}