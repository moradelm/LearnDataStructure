#include <stdio.h>
void minMax(float *a, float *b)
{
  float temp;
  if (*a > *b)
  {
    temp = *a;
    *a = *b;
    *b = temp;
  }
}
void trie3Nombres(float *x, float *y, float *z)
{
  if (*z < *y)
  {
    minMax(y, z);
  }
  if (*z < *x)
  {
    minMax(x, z);
  }
  if (*y < *x)
  {
    minMax(x, y);
  }
}

int main()
{
  float n1, n2, n3;
  printf("entrer un nombre : ");
  scanf("%f", &n1);
  printf("entrer un nombre : ");
  scanf("%f", &n2);
  printf("entrer un nombre : ");
  scanf("%f", &n3);
  printf("apres l'appel a la fonction trie3Nombres:\n");
  trie3Nombres(&n1, &n2, &n3);
  printf("l'ordre croissant est %f %f %f\n", n1, n2, n3);
}