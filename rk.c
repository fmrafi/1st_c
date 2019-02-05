#include <math.h>
 int main()
 {
      float a,b,c,discriminat,
                 root1,root2;
      printf("input values of a,b, and c\n");
      scanf("%f %f %f",&a,&b,&c);
      discriminat=b*b-4*a*c;if(discriminat<0);
         printf("\n\nROOTS ARE  IMAGINARY\n");
     if
    {
         root1=(-b+sqrt(discriminat))/(2.0*a);
         root2=(-b-sqrt(discriminat))/(2.0*a)};
         printf("\n\nRoot1=%5.2f\n\nRoot2=%5.2f\n",
                      root1,root2);
     }
     return 0;
}
