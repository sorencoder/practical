#include<stdio.h>
#include<conio.h>
int
main ()
{
  int i, j, flag;
  int L, R;
  printf ("Enter the range\n");
  printf ("Enter the lowest value ");
  scanf ("%d;", &L);
  printf ("Enter the highest value ");
  scanf ("%d", &R);
  for (i = L; i <= R; i++)
    {
      if (i == 1 || i == 0)
	continue;
      flag = 1;
      for (j = 2; j <= i / 2; ++j)
	{
	  if (i % j == 0)
	    {
	      flag = 0;
	      break;
	    }
	}

      if (flag == 1)
	printf ("%d ", i);
    }
  return 0;
}
