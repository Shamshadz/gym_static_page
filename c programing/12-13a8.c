/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q8)
*/
#include<stdio.h>

void arr1(int arr[], int st, int l){
    if(st >= l)
    return;
    printf("%d  ", arr[st]);
    arr1(arr, st+1, l);
}
int main()
{
    int arr[10], n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Elemet %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements are :\n");
    arr1(arr, 0, n);

   return 0;
}