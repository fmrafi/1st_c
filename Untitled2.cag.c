#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("please enter 3 value to find smallest \n");
    scanf("%d %d %d",&a,&b,&c);
    if (a<b&&a<c)
        printf("smallest number %d",a);
    else if (b<c)
        printf("smallest number %d",b);
    else
        printf("smallest number %d",c);
    return 0;
}
