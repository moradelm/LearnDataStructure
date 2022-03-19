#include <stdio.h>
#include <string.h>
int Occurrence(char tab[], char caractere)
{
  int cpt, n;
  char *p;
  n = strlen(tab);
  cpt = 0;
  for (p = tab; p < tab + n; p++)
  {
    if (caractere == *p)
    {
      cpt++;
    }
  }
  return cpt;
}

int main()
{
  char c[100], car;
  int t;
  printf("Saisir une chaine de caractere:");
  gets(c);
  printf("Saisir un caractere:");
  scanf("%c", &car);
  t = Occurrence(c, car);
  printf("%d\n", t);
}