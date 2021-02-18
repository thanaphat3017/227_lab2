#include<stdio.h>
int main()
{
    int a,b,c,i,count;
    char check[5];
    int num[5];
    scanf("%d %d %d" ,&a,&b,&c);
    if(a>b)
    {
        count=a;
        a=b;
        b=count;
    }
    if(a>c)
    {
        count=a;
        a=c;
        c=count;
    }
    if(b>c)
    {
        count=b;
        b=c;
        c=count;
    }
    scanf("%s" ,check);
    for(i=0;i<3;i++)+

    {
        if(check[i]=='A')
        {
            num[i]=a;
        }
        else if(check[i]=='B')
        {
            num[i]=b;
        }
        else if(check[i]=='C')
        {
            num[i]=c;
        }
    }
    printf( "%d %d %d", num[0], num[1], num[2] );
    return 0;
}
