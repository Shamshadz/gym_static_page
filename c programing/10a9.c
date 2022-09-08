/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q9)
*/
#include<stdio.h>

int main()
{
    int a, b, arr[10][10]; 
    printf("Enter the rows and colums of two matrices : ");
    scanf("%d\t%d", &a, &b);

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Element %d%d : ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        } printf("\n");
    }
    printf("Transpose of Matrix :\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d ",arr[j][i]);
        } printf("\n");
    }

   return 0;
}