/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q19)
*/
#include<stdio.h>

int main()
{
    int arr[10], n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Element %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("{ ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("}\n");

    int *ptr;
    ptr = arr;

    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(ptr+i) > *(ptr+j)){
                int temp;
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp; 
            }
        }
    }

    printf("{ ");
    for(int i=0;i<n;i++){
        printf("%d ", *(ptr + i));
    }
    printf("}");

   return 0;
}