#include <stdio.h> //entrada e saida
#include <stdlib.h> //windows

int main()
{
  int n=10;
  scanf("%d",&n);
  
  for (int i = 1; i < n; i++)
  {
    if (i%2==0)
    {
      printf("%d ",i);
    }
    
  }
  
  getchar();
  return 0;
}