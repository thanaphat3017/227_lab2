#include <stdio.h>

int main()
{
    int a,b,c,t;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

        t =a+b+c;
        if(t>=80&&t<=100)
        {
            printf("A");
        }
        else if(t>=75&&t<=79)
        {
            printf("B+");
        }
        else if(t>=70&&t<=74)
        {
            printf("B");
        }
        else if(t>=65&&t<=69)
        {
            printf("C+");
        }
        else if(t>=60&&t<=64)
        {
            printf("C");
        }
        else if(t>=55&&t<=59)
        {
            printf("D+");
        }
        else if(t>=50&&t<=54)
        {
            printf("D");
        }
        else if(t>=0&&t<=49)
        {
            printf("F");
        }
    return 0;
}

