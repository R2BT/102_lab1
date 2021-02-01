#include<stdio.h>
int main()
{
   #include<stdio.h>
int main()
{
    float t;
    scanf("%f",&t);
    int h=t/1,m=(t-h)*100;
    if(t>0&&t<=11.59)
    {
        if(m==0)
            printf("%d:00 a.m.",h);
        else
            printf("%d:%d a.m.",h,m);
    }
    else
    {
        if(t==12)
        {
            printf("%d:00 p.m.",h);
        }
        else
        {
            if(m==0)
                printf("%d:00 p.m.",h-12);
            else
                printf("%d:%d p.m.",h-12,m);
        }
    }
}

  return 0;
}
