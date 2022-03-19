#include <stdio.h>
void split(int tab[], int n)
{
  int *p, *q, *k, i = 0, j = 0, tabPos[100], tabNeg[100];
  // q=TabPos;
  // k=TabNeg;
  for (p = tab; p < tab + n; p++)
  {
    if (*p >= 0)
    {
      tabPos[i] = *p;
      i++;
    }
    else
    {
      tabNeg[j] = *p;
      j++;
    }
  }
  printf("Tableau des valeurs positives:\n");
  for (p = tabPos; p < tabPos + i; p++)
  {
    printf("%d \t", *p);
  }
  printf("\n\n");
  printf("Tableau des valeurs negatives:\n");
  for (p = tabNeg; p < tabNeg + j; p++)
  {
    printf("%d \t", *p);
  }
  printf("\n");
}
int main()
{
  int tab[100], *p, n, i = 0;
  printf("Saisir la taille du tableau: ");
  scanf("%d", &n);
  for (p = tab; p < tab + n; p++)
  {
    printf("L'element %d = ", i);
    scanf("%d", p);
    i++;
  }
  split(tab, n);
}