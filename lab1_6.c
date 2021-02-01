#include <stdio.h>
int main()
{
    int i=0,n,m,t;
    char b;
    scanf("%d %d %d",&n,&m,&t);
    fflush (stdin);
    scanf("%c",&b);
    if(n>0 && n<1000 && m>0 && m<1000 && t>1 && t<1000000000 && t>m && t>n)
    {
        while(i<t)
    {
        if(b=='L')
        {
           i=i+n;
           if(i>=t)
           {
               printf("L");
            break;
           }

           i=i+m;
           if(i>=t)
            {
               printf("R");
            break;
           }
        }
        if(b=='R')
        {
           i=i+m;
           if(i>=t)
           {
               printf("R");
            break;
           }
           i=i+n;
           if(i>=t)
            {
               printf("L");
            break;
           }
        }
    }
    }

}
