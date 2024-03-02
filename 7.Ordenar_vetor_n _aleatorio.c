#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int vetor[],int n)
{
  int aux=0;
  for (int j = 0; j < (int)n; j++)
  {
    for (int i = 1; i < (int)n; i++)
  {
    if (vetor[i]<vetor[i-1])
    {
      aux=vetor[i-1]; vetor[i-1]=vetor[i]; vetor[i]=aux;
    }
  }
  }  
}

void imprimir(int vetor[],int n)
{
  for (int i = 0; i < (int)n; i++)
  {
    printf("%d ",vetor[i]);
  }
  
}

void criar_vetor(int vetor[],int n)
{
  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    vetor[i]=rand()%100;
  }
  
}

int main()
{
  int n; scanf("%d",&n);
  int vetor[n];

  criar_vetor(vetor,n); 
  ordenar(vetor,n);
  imprimir(vetor,n);

  getchar();
  return 0;
}