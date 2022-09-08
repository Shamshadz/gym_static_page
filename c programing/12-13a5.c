/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q5) check armstrong and perfect numbers
*/
#include<stdio.h>

int armstrong(int n){
    int sum =0;
    while(n>0){
        int r =n%10;
        sum += r*r*r;
        n = n/10;
    }
    return sum;
}
int perfect(int n){
    int sum =0;
    for(int i =1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter Number to find if armstrong and perfect numbers\n");
    scanf("%d", &n);
    int arm = armstrong(n);
    if(arm==n){
        printf("It is armstrong number\n");
    }
    else{
        printf("It is not armstrong number\n");
    }
    printf("%d\n", arm);

    int pr = perfect(n);
    if(pr==n){
        printf("It is perfect number\n");
    }
    else{
        printf("It is not perfect number\n");
    }
    printf("%d", pr);


   return 0;
}