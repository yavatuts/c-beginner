#include <stdio.h>

int main()
{
  int mat1 [2][3], mat2[3][4], mat3[2][4]={0};
  int i,j,k,l;

  // Read Mat1
  for(i=0 ; i<2 ; i++)
    for(j=0 ; j<3; j++) {
      printf("Enter mat1[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }

  // Read Mat2
  for(i=0 ; i<3 ; i++)
    for(j=0 ; j<4 ;j++) {
      printf("Enter mat2[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }

  // Multiply mat1 by mat2
  for(i=0 ; i<2; i++)
    for(j=0 ; j<4; j++) {
      mat3[i][j]=0;
      for(k=0; k<3; k++)
        mat3[i][j] = mat3[i][j] + mat1[i][k]*mat2[k][j];
    }
  printf("\nThe produc of mati & mat2 is :\n\n");
  for(i=0 ;i<2 ;i++) {
    for(j=0 ; j<4; j++)
      printf("%5d", mat3[i][j]);
    printf("\n");
  }
  return 0;
}
