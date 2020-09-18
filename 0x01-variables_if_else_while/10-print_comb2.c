#include <stdio.h>
/**
 *main - Void
 *Return: 0
 */
int main(void)
{
int x = 48;
int y = 48;
for (x = 48 ; x < 58 ; x++)
{
for (y = 48; y < 58 ; y++)
{
putchar(x);
putchar(y);
if (x == 57 && y == 57)
{
break;
}
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
