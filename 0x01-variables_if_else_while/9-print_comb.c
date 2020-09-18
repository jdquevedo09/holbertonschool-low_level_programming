#include <stdio.h>
/**
 *main - Void
 *Return: 0
 */
int main(void)
{
int x = 48;
for (x = 48 ; x <= 57 ; x++)
{
putchar(x);
if (x < 57)
{
putchar(44);
}
if (x < 57)
{
putchar(32);
}
}
putchar('\n');
return (0);
}
