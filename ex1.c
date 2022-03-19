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
  int a, b;
  printf("entrer le nombre a");
  scanf("%d", &a);
  printf("entrer le nombre b");
  scanf("%d", &b);
  permuter(&a, &b);
  printf("\n Après d'appeler fonction permuter :\n\t a = %d\n\tb = %d\n", a, b);
}
