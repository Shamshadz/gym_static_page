/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q5) Write a program in C to sort elements of array in ascending order.
*/
#include<stdio.h>

int main()
{
    int arr[100], s1, temp;	
	   
       printf("Input the number of elements to be stored in the first array :");
       scanf("%d",&s1);
   
       printf("Input %d elements in the array :\n",s1);
       for(int i=0;i<s1;i++){
	       printf("element - %d : ", i);
          scanf("%d", &arr);                }

   for(int i=0;i<s1; i++){
           for(int k=0;k<s1-1;k++){
                if(arr[k]>=arr[k+1]){
                   temp=arr[k+1];
                   arr[k+1]=arr[k];
                   arr[k]=temp;     }  
              }
         }                      

    printf("\nThe array in ascending order is :\n");
    for(int i=0; i<s1; i++){
        printf("%d  ", arr[i]);
    }
	return 0;
}