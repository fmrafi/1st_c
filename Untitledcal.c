#include <stdio.h>
int main ()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
     {
       sum=sum+i;
     }
     printf ("1+2+3+4+....+n=%d",sum);
     return 0;

}
