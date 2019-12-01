/* 1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h);
где m-масса тела в килограммах, h - рост в метрах.

2. Написать программу обмена значениями двух целочисленных переменных без использования третьей переменной.

3. Написать программу нахождения корней заданного квадратного уравнения.

4. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим
словом «год», «года» или «лет».*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>

float zadanie1(void)
{
	float m, h, i;
	printf("Enter your WEIGHT (kg): ");
	scanf("%f", &m);
	printf("Enter your HEIGHT (m): ");
	scanf("%f", &h);
	i = m / (h * h);
	return i;
}

int zadanie2(void) // проблемное задание. выводит 0 и -641 при любых значениях
{
	int a, b;
	printf("\nEnter first number A= ");
	scanf("%d", &a);
	printf("Enter second number B= ");
	scanf("%d", &b);
	printf("A= %d and B= %d", a, b);
	a = a + b - (b = a);
	return 0;
}

float zadanie3(void)
{
	float a, b, c, x;
	printf("\nEnter A: ");
	scanf("%f", &a);
	printf("Enter B: ");
	scanf("%f", &b);
	printf("Enter C: ");
	scanf("%f", &c);
	printf("Your: %0.f(x^2)+%0.fx+%0.f=0", a, b, c);
	if ((b * b - 4 * a * c) >= 0) //Если дискриминант больше или равен 0
	{
		x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("\nFirst X= %0.00f", x);
		x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("\nSecond X= %0.00f", x);
	}
	else
	{
		printf("\nThe equation has no roots");
	}

	return 0;
}

int zadanie4(void) 
{
	int year, t1, t2, i = 0;
	printf("\nEnter your age: ");
	scanf("%d", &year);
	t1 = year % 10;
	t2 = year % 100;
	if (t1 == 1 && t2 != 11) { printf("%d god", year); i++; }
	if (t1 >= 2 && t1 <= 4 && (t2 < 10 || t2 >= 20)) { printf("%d goda", year); i++; }
	if (i == 0) { printf("%d let", year); }
}

void main(int argc, char* argv[])
{
	printf("Your BMI: %f", zadanie1());
	printf("\nEnd of zadanie 1.\n");
	printf("\nYour A: %d and B: %d", zadanie2()); // не понимаю, почему на выводе всегда (0, -641)
	printf("\nEnd of zadanie 2.\n");
	printf("\nEnd of zadanie 3.\n", zadanie3());
	printf("\nEnd of zadanie 4.", zadanie4());
}