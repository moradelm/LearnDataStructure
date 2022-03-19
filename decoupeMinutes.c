#include <stdio.h>
void decoupeMinutes(int *heure, int *minute)
{
  int q;
  while (*minute >= 60)
  {
    q = *minute / 60;
    *heure += q;
    *minute = *minute % 60;
    // *minute = *minute - q * 60;
  }
}
void NouvelleHeure(int *nH, int *nM)
{
  *nM = *nM + 15;
  decoupeMinutes(nH, nM);
}

int main()
{
  int h, m;
  printf("entrer l heure ");
  scanf("%d", &h);
  printf("entrer minutes ");
  scanf("%d", &m);
  decoupeMinutes(&h, &m);
  NouvelleHeure(&h, &m);
  printf("%dh %dmin\n", h, m);
}