#include <stdio.h>
#include <math.h>
#include <Windows.h>
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(65001);
	float h = 12.0;//новый коммит
	float g = 5.6;
	float t = sqrt(5 * h / g);

	printf("Начало\n");//начало
	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);
	printf("Конец\n");
}