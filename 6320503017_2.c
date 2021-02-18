#include<stdio.h>
int main()
{
    float time=0,a=199.00,b=299.00,fmod=0;
    int mod,itime;
    char pro;
    scanf("%c",&pro);
    scanf("%f",&time);
    if(pro=='A')
    {
        if(time>200)
        {
            mod = time*100;
            mod = mod%100;
            fmod = mod;
            fmod = (fmod/60)*3;
            itime =time;
            a=(a+(3*(itime-200)))+fmod;
            printf("%.2f",a);
        }
        else
        {
            printf("%.2f",a);
        }
    }
    if(pro=='B')
    {
        if(time>400)
        {
            mod = time*100;
            mod = mod%100;
            fmod = mod;
            itime =time;
            fmod = (fmod/60)*2;

            b=(b+(2*(itime-400)))+fmod;
            printf("%.2f",b);
        }
        else
        {
            printf("%.2f",b);
        }
    }
    return 0;
}
