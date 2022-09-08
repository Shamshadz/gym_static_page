/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q17)
*/
#include<stdio.h>
#include<string.h>

int length(char *ch){
    int count = 0;
    while(*ch != '\0'){
        *ch++;
        count++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter the string\n");
    scanf("%s", &str);

    int l = length(str);
    printf("Length of string '%s' is : '%d'\n", str, l);

   return 0;
}