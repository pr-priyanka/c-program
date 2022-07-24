#include<stdio.h>
int main()
{
    int a, b, result;
    char op;
    
    printf("enter an operator");
    scanf("%c", &op);
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    if(op=='+')
    {
      result=a+b;
      printf("result=%d", result);
    }
    else if(op=='-')
    {
        result=a-b;
        printf("result=%d", result);
    }
    else if(op=='*')
    {
        result=a*b;
        printf("result=%d", result);
    }
    else if(op=='/')
    {
        if(b==0)
        {
            printf("division not possible");
        }
        else
        {
           result=a/b;
           printf("result=%d", result);
        }
    }
    else if(op=='%')
    {
        if(b==0)
        {
            printf("division not possible");
        }
        else
        {
          result=a%b;
          printf("result=%d", result);
        }
    }
    else
    {
        printf("enter a valid operator");
    }
    return 0;
}
