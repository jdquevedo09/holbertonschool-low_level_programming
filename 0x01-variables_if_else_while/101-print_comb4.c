#include <stdio.h>
/**
 *main - Void
 *Return: 0
 */
int main(void)
{
int x = 48;
int y = 49;
int z = 50;
for (x = 48 ; x < 56 ; x++)
{
for (y = 49; y < 57 ; y++)
{
for (z = 50; z < 58 ; z++)
{
if (x < y && y < z)
{
putchar(x);
putchar(y);
putchar(z);
if (x == 55 && y == 56 && z == 57)
{
break;
}
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
