#include <stdio.h>
/**
 *main - Void
 *Return: Always 0
 */
int main(void)
{
char charType;
int intType;
float floatType;
long longintType;
long long longlongitType;
printf("Size of a char: %ld bytes\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(intType));
printf("Size of a long int: %ld bytes\n", sizeof(longintType));
printf("Size of a long long int: %ld byte\n", sizeof(longlongintType));
printf("Size of a float: %ld byte\n", sizeof(floatType));
return (0);
}
