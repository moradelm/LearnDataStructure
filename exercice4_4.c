#include <stdio.h>
void cycle(int TAB[], int N, int n)
{
  int i, *p, c;
  for (i = 0; i < N; i++)
  {
    c = TAB[n - 1];
    for (p = TAB + n - 1; p >= TAB; p--)
    {
      *(p + 1) = *p;
    }
    TAB[0] = c;
  }
}
int main()
{
  int TAB[100], n, N, *p, i;
  printf("saisir la taille du tableau: ");
  scanf("%d", &n);
  i = 0;
  for (p = TAB; p < TAB + n; p++)
  {
    printf("TAB[%d]= ", i);
    scanf("%d", p);
    i++;
  }
  printf("nombre de boucle:");
  scanf("%d", &N);
  cycle(TAB, N, n);
  i = 0;
  for (p = TAB; p < TAB + n; p++)
  {
    printf("TAB[%d]= %d \n", i, *p);
    i++;
  }
}