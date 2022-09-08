/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q6)
*/
#include<stdio.h>

int main()
{
    int arr[100], n, n1;
    printf("Enter the arr size : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter anotther size of arr you want and sort and merge : ");
    scanf("%d", &n1);

    for(int i=n;i<n1+n;i++){
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("printing initial arrys\n");
    for(int i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }
    int n2 = n1+n;
    for(int j=0;j<n2;j++){
        for(int k=0;k<n2-1;k++){
            if(arr[k]>=arr[k+1]){
                int temp =arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                }
        }
    }
    
    printf("\nprinting sorted arrys with merge\n");
    for(int i=0;i<n2;i++){
        printf("%d  ", arr[i]);
    }

   return 0;
}