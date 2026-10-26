#include <stdio.h>
#include <math.h>
#include <Windows.h>
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(65001);
	float h = 12.0;//новый коммит
	float g = 10.0;
	float t = sqrt(2 * h / g);
	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);
}