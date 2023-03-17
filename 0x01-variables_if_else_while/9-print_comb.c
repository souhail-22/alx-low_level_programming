#include <stdio.h>
/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)

{int num = '0';

while (num <= '9')
{
putchar(num);
if (num != '9')
{
	putchar(',');
	putchar(' ');
}
num++;
}
putchar('\n');
return (0);

}
