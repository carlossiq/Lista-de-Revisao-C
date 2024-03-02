#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n, int a, int b,int c)
{
  if(n<=1){return 0;}
  int aux=a+b;
  a=b; b=aux;
  if(c==n){return b;}
  c++;
  return fibonacci(n,a,b,c);
}

int main()
{
  int x;
  scanf("%d",&x);
  printf("%d",fibonacci(x,0,1,2));

  getchar();
  return 0;
}