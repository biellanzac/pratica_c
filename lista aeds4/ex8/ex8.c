#include<stdio.h>

int main (void )
{
  int matriz[3][3],i, j;
  
  printf ("Digite valor para os elementos da matriz\n");
  
  for ( i=0; i<3; i++ )
    for ( j=0; j<3; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  
  printf("Valor da diagonal principal:");
  
  printf("%i\n", matriz[0][0]);
  printf("%i\n", matriz[1][1]);
  printf("%i\n", matriz[2][2]);
  

  return(0);
}
