#include <stdio.h>
void permuter(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int i;
  int n;

  printf("veuiller entrer un nombre");
  scanf("%d", &n);
  int q = n;
  int tab[100];
  int *c;
  int *m;
  c = tab;
  int compteur = 0;
  int a = 1;
  while (q != 0)
  {
    q = q / 10;
    a = a * 10;
    compteur++;
  }
  a = a / 10;
  for (c = tab; c < tab + compteur; c++)
  {
    *c = n / a;
    n = n - a * *c;
    a = a / 10;
  }
  printf("avant permutation:\n");
  for (c = tab; c < tab + compteur; c++)
  {
    printf("%d\n", *c);
  }
  printf("apres permutation:\n");
  for (c = tab, m = tab + compteur - 1; c < tab + compteur / 2, m >= tab + compteur / 2; c++, m--)
  {
    permuter(c, m);
  }
  for (c = tab; c < tab + compteur; c++)
  {
    printf("%d", *c);
  }
  printf("\n");
}
