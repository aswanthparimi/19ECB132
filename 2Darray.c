#include<stdio.h>
int main()
{
     int a[3][4],i,j;
     printf("Enter Elements for Matrix of Size 3*4:\n\n");
     
     for(i=0;i<=2;i++) 
          for(j=0;j<=3;j++) 
          {
               scanf("%d",&a[i][j]);
          }
     
     printf("\nTwo Dimensional Array: \n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=3;j++)
          {
               printf("%3d ",a[i][j]);
            
          }
          printf("\n");
     }
     return 0;
}



Enter Elements for Matrix of Size 3*4:

5
8
2
1
5
9
3
6
2
9
4
3

Two Dimensional Array: 

  5   8   2   1 
  5   9   3   6 
  2   9   4   3 