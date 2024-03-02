#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <string.h> 
#include <ctype.h> 
#include <assert.h> 
#include <errno.h>
#include <limits.h> 
#include <time.h> 

#define DIM 8

int main()
{
  
  char texto[]="lista.txt", linha[DIM];
  int aux=0, vetor[10], i=0, par=1, impar=0;//produtorio dos pares e somatorio dos impares

  FILE *arquivo; arquivo=fopen(texto,"r+b");
  
  while(!feof(arquivo))
    {
      fgets(linha, 10, arquivo);      
      aux=atoi(linha);
      vetor[i]=aux; i++;
    }
    
  for (int j = 0; j < (DIM-1); j++)
    {
      //printf("%d ",vetor[j]);
      if (((vetor[j]%2)==0)&&(vetor[j]!=0)) {par=par*vetor[j];}
      if ((vetor[j]%2)!=0) {impar=impar+vetor[j];}
    }
  
  printf("produtorio: %d\nsomatorio: %d",par, impar);
  fclose(arquivo);
  getchar();
  return 0;
  
}