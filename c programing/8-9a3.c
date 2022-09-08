/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q3) Write a program in C to display the cube of the number upto given an integer.
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n, cube;
    printf("Enter the integer to find cube upto given integer\n");
    scanf("%d", &n);

    if(n>0){
        for(int i= 1; i<=n;i++){
        cube = pow(i,3);
        printf("cube of %d is: %d\n", i ,cube);
        }
    }
    else{
        for(int i=0; i>=n;i--){
        cube = pow(i,3);
        printf("cube of %d is: %d\n", i ,cube);
        }
    }

   return 0;
}