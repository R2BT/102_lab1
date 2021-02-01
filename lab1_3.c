#include<stdio.h>
int main()
{
    long long N,a,b;
    scanf("%lld",&N);
    a=N%3;
    b=N%11;
    printf("%lld %lld",a,b);

    return 0;
}
