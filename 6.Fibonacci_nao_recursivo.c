#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n, int a, int b)
{
  if(n<=1){return 0;}
  for (int i = 1; i < n; i++)
  {
    int aux=a+b;
    a=b; b=aux;
  }
  
  return b; 
  
}

int main()
{
  int x;
  scanf("%d",&x);
  printf("%d",fibonacci(x,0,1));

  getchar();
  return 0;
}