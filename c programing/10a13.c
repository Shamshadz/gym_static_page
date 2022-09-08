/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q13)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char str1[100];
    int temp[100];
    printf("Enter the string 1\n");
    scanf ("%[^\n]%*c", &str);

    printf("Enter the string 2\n");
    scanf ("%[^\n]%*c", &str1);

    for(int i=0; str[i] != '\0'|| str1[i] != '\0';i++){
        temp[i] = str[i];
        str[i] = str1[i];
        str1[i] = temp[i];
    }
    printf("str is now : %s\n", str); 
    printf("str1 is now : %s\n", str1);
    

    return 0;
}