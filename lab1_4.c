#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int a[n];
    for(i;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],loca=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            loca=i;
        }
    }
    printf("%d %d",loca+1,max);
}

