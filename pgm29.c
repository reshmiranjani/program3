#include<stdio.h>
void main()
{
    int h,m;
    scanf("%d",&m);
    while(m>=60)
    {
        h++;
        m=m-60;
    }
    printf("%d %d",h,m);
}
