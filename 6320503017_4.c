#include<stdio.h>
int main()
{
    char name;
    int num=0,cname;
    scanf("%c",&name);
    scanf("%d",&num);
    cname =name-num;
    if (num%10==5)
        printf("%c",92);
    if (cname%2==0)
    {
        if (name >=65 && name <= 73)
        {
            printf("{@_@}");
        }
        else if(name >=74 && name <= 82)
        {
            printf("{*v*}");
        }

        else if(name >=83 && name <= 90)
        {
            printf("{x_x}");
        }

    }

    else
    {
        if (name >=65 && name <= 73)
        {
            printf("(^_^)");
        }

        else if(name >=74 && name <= 82)
        {
            printf("(*o*)");
        }

        else if(name >=83 && name <= 90)
        {
            printf("(T_T)");
        }

    }
    if (num%10==5)
        printf("/");

    return 0;
}
