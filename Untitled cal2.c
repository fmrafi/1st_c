#include <stdio.h>
int main ()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i=i++)
     {
       sum=sum+(i*5);
     }
     printf ("5+10+15+20+....+n=%d",sum);
     return 0;

}

