#include <stdio.h>
int main()
{
    int sum,a,n,d,i;
    sum=0;
    scanf("%d%d%d",&n,&a,&d);
    sum=(n*(2*a+(n-1)*d))/2;
    printf("%d",sum);
            return 0;
}
