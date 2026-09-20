#include <stdio.h>
#include <locale.h>

int area()
{
	setlocale(LC_CTYPE, "RUS");

	const double R = 13.7;
	double phi;
	double S;

	printf("=============================================================\n");
	printf("Введите угол Ф в радианах:\n");
	scanf("%lf", &phi);
	printf("=============================================================\n");
	S = 0.5 * R * R * phi;
	printf("Исходные данные:\n");
	printf("Радиус R = %.1f\n", R);
	printf("Угол Ф = %.1f радиан\n", phi);
	printf("=============================================================\n");
	printf("Результат:\n");
	printf("Площадь сектора S = %.4f\n", S);
	printf("=============================================================\n");
}

int main()
{
	area();
	getchar();
	return 0;
}
