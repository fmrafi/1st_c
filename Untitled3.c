#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("please enter 4 value to find smallest \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a<b&&a<c&&a<d)
        printf("smallest number %d",a);
    else if (b<c&&b<d)
        printf("smallest number %d",b);
    else if (c<d)
        printf("smallest number %d",c);
        else
            printf("smallest number %d",d);
    return 0;
}

