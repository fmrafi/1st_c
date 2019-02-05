#include <stdio.h>
int main ()
{
    float i,n,sum=0;
    scanf("%f",&n);


    for (i=1;i<=n;i=i++)
     {
       sum=sum+(i*1.5);
     }
     printf ("%f",sum);
     return 0;

}
