/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q20)
*/
#include<stdio.h>

int main()
{   
    char alph[27];
    char *ptr;
    ptr = alph;
    for(int i=0;i<26;i++){
        *ptr = i + 'A';
        ptr++;
    }
    ptr =alph;
    printf("Printing the Alphabets :\n");
    for(int i =0;i<26;i++){
        printf("%c ", *ptr);
        ptr++;
    }

   return 0;
}