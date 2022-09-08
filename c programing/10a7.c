/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q7)
*/
#include<stdio.h>

int main()
{
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Element %d%d : ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("printing 2D array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", arr[i][j]);    
        }
        printf("\n");
    }

   return 0;
}