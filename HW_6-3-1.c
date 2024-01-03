/* Задача 1. Наибольшее из пяти чисел
Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число */

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	int max = a > b ? a : b;
		max = max > c ? max : c;
		max = max > d ? max : d;
		max = max > e ? max : e;
		printf("%d", max);
	return 0;
}