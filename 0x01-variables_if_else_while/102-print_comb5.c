#include <stdio.h>
/**
 *main - Void
 *Return: 0
 */
int main(void)
{
  int i = 48;
  int j = 48;
  int x = 48;
  int y = 0;
  int s= 0;
  for (i = 48 ; i < 58 ; i++)
    {
      for (j = 48 ; j < 58 ; j++)
	{
	  for (x = i ; x < 58 ; x++)
	    {
	      if (i == x)
		{
		y = j + 1;	
	    }
	  else
{
  y = 48;
 }
	  for (s = y ; s < 58 ; s++)
	    {
	      putchar(i);
	      putchar(j);
	      putchar(32);
	      putchar(x);
	      putchar(s);
	      if ( i != 57 || j != 56 || x != 57 || s != 57)
		{
		  putchar(44);
		  putchar(32);
		}
	    }
	}
	}
    }  
  putchar('\n');
  return (0);
}
