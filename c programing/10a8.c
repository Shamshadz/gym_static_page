/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q8)
*/
#include<stdio.h>

int main()
{
    int a, b, arr[10][10], arr1[10][10]; 
    printf("Enter the rows and colums of two matrices : ");
    scanf("%d\t%d", &a, &b);

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Element %d%d : ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Element %d%d : ", i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Sum of Two Matrices\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ", arr1[i][j] + arr[i][j]);    
        } printf("\n");
    }
   return 0;
}