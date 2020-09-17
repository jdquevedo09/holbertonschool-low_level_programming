#include <stdio.h>
/**
*main - Void
*Return: 0
*/
int main(void)
{
char x = 'a';
while (x < 'z')
{
if (x == 'e' || x == 'q')
{
x++;
}
 else {
   putchar(x);
   x++;
 }
}
putchar('\n');
return (0);
}
