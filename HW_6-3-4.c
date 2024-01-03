/* Задача 4. Какое время года
Данные на входе: Целое число от 1 до 12 - номер месяца.
Данные на выходе: Время года на английском: winter, spring, summer, autumn */

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a == 12 || a < 3)
		printf("winter\n");
	if (a > 2 && a < 6)
		printf("spring\n");
	if (a > 5 && a < 9)
		printf("summer\n");
	if (a > 8 && a < 12)
		printf("autumn\n");
	return 0;
}
