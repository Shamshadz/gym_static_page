/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q14)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the string 1\n");
    scanf("%[^\n]%*c", &str);
    strrev(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }

    return 0;
}