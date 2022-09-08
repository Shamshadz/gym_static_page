/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q11)
*/
#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;
    printf("Enter the string\n");
    scanf("%s", &str);

    for (int j = 0; str[j] != '\0'; j++)
    {
        count++;
    }
    printf("Size of string %s is : %d", str, count);

    return 0;
}