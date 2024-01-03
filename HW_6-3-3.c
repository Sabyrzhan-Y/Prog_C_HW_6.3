/* Задача 3. В порядке возрастания
Данные на входе: Три целых числа
Данные на выходе: Одно слово YES или NO */

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
    if (a <= b && b <= c)
		printf("YES\n");
    else 
        printf("NO\n");
	return 0;
}
