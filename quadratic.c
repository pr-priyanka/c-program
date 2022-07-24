#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    float d, r1, r, i, r2;
    printf("enter the coefficients");
    scanf("%d%d%d",&a, &b, &c);
    d=(b*b)-(4*a*c);
    if(a==0)
    {
        printf("it is a linear equation");
        return 1;
    }
    else
    {
        if(d==0)
        {
           printf("roots are real and equal\n");
           r1=(-b)/(2*a);
           r2=r1;
           printf("roots of equation are %f and %f", r1, r2);
        }
        else if(d>0)
        {
            printf("roots are real and distinct\n");
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("the roots of equation are %f and %f", r1, r2);

        }
       else
       {
         printf("roots are imaginary and conjugate of each other\n");
         r=(-b)/(2*a);
         i=sqrt(-d)/(2*a);
         r1=r+i;
         r2=r-i;
         printf("the roots of equation are %f and %f", r1, r2);
       }
    }
        return 0;
}
