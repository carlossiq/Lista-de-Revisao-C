#include <stdio.h> 
#include <stdlib.h>
#include <math.h> 
#include <string.h> 
#include <ctype.h> 
#include <assert.h> 
#include <errno.h> 
#include <limits.h>
#include <time.h> 

#define DIM 10

int main()// 'F'=70; 'M'=77; '.'=46; '0' a '9' =48 a 57;
{
  char string_leitura[DIM], string_numerica[DIM];
  float media_M=0,media_F=0;
  int M=0,F=0;

  char nome_do_arquivo[]="notas.txt";
  FILE *arquivo; arquivo=fopen(nome_do_arquivo,"r+b");
  while (!feof(arquivo))
  {
    fgets(string_leitura, (DIM-2), arquivo);
    for (int i = 0; i < DIM-1; i++)
    {
      string_numerica[i]=string_leitura[i+2];    
    }
    //printf("%s",string_numerica);
    if(string_leitura[0]==70){F++; media_F+=atof(string_numerica);}
    if(string_leitura[0]==77){M++; media_M+=atof(string_numerica);} 
    //printf("%f  %f\n",media_F,media_M);         
  }
  media_F=media_F/F; media_M=media_M/M;

  if(media_F>media_M){printf("%f",media_F);}
  if(media_F<media_M){printf("%f",media_M);}

  rewind(arquivo);
  fclose(arquivo);
  getchar();
  return 0;
}