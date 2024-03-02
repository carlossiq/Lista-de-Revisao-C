#include <stdio.h> //entrada e saida
#include <stdlib.h> //windows

int imprimir_pares(int x,int n)
  {
    if (x%2==0)
    {
      printf("%d ", x);
    }
    x++;
    if (x>n)
      {
        return 0;
      }
    return imprimir_pares(x,n);
  }

int main()
{
  {
    int n;
    scanf("%d",&n);
    n--;
    imprimir_pares(1,n);  
  }
  
  getchar();
  return 0;
}