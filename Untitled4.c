#include<stdio.h>
int main ()
{
    char chr;
    printf("please enter a char \n");
    scanf("%c",&chr);
   if (chr=='a'||chr=='A')
        printf("char is vowel");
     else if (chr=='e'||chr=='E')
        printf("char is vowel");
        else if (chr=='i'||chr=='I')
        printf("char is vowel");
        else if (chr=='o'||chr=='O')
        printf("char is vowel");
        else if (chr=='u'||chr=='U')
        printf("char is vowel");
    else
        printf("char is consonant");
    return 0;
}
