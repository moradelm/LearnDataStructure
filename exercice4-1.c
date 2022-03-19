#include <stdio.h>

void reverse(int tab[], int n)
{
  int c, *p, *q;
  for (p = tab, q = tab + n - 1; p < tab + n / 2, q >= tab + n / 2; p++, q--)
  {
    c = *p;
    *p = *q;
    *q = c;
  }
  /*
  p = tab;
  q = tab + n - 1;
  while (p < q)
  {
    c = *p;
    *p = *q;
    *q = c;
    p++;
    q--;
  }*/
}
int main()
{

  int tab[100], n, *p, i = 0;
  printf("Saisir la taille du tableau:");
  scanf("%d", &n);
  for (p = tab; p < tab + n; p++)
  {
    printf("L'element %d = ", i);
    scanf("%d", p);
    i++;
  }
  reverse(tab, n);
  i = 0;
  printf("L'inverse du tableau:\n");
  for (p = tab; p < tab + n; p++)
  {
    printf("L'element %d = %d \n", i, *p);
    i++;
  }
}