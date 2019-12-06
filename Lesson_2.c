#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/* 1. Realizovat' fynkciu perevoda iz 10 sistemu v dvoichnyu, ispol'zyua rekyrsiu.
2. Realizovat' fynkciu vozvedeniua chisla a v stepen' b rekyrsivno.*/

int zadanie1(int num)
{
	int bin = 0, k = 1;
	while (num)
	{
		bin += (num % 2) * k;
		k *= 10;
		num /= 2;
	}
	return bin;
}

int zadanie2(int a, int b)
{
	int rez;
	if (a == 1)
		return 1;
	else
		rez = 1;
		for (int i = 0; i < b; i++)
			rez *= a;
		return rez;
}

int main(int argc, char* argv)
{
	int a, b, num;
	printf("Zadanie 1.\n");
	printf("Enter DEC num: ");
	scanf("%d", &num);
	printf("Your NUM in BIN = %d", zadanie1(num));
	printf("\nZadanie 2.\n");
	printf("Enter A: ");
	scanf("%d", &a);
	printf("Enter B: ");
	scanf("%d", &b);
	printf("A^b = %d", zadanie2(a, b));
	return 0;
}