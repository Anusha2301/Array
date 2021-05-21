#include<stdio.h>
void main()
{
 int i,j;
 int matrix[3][3]={10,20,30,40,45,50,55,65,75};
 printf("\nThe 9 elements of 3*3 matrix is:");
 printf("\n");
 for(i=0;i<=3;i++)
 {
  for(j=0;j<3;j++)
     printf("%d\t",matrix[i][j]);
     printf("\n");
  }
 } 
     
