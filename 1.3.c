#include <stdio.h>
#include <math.h>
#include <Windows.h>
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(65001);
	float h = 11.0;//новый коммит
	float g = 8.6;
	float t = sqrt(5 * h / g);

	printf("Start\n");
	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);
	printf("End\n");//end
}