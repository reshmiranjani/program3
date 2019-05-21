#include<stdio.h>
void main()
{
  int h1,h2,m1,m2,t1,t2;
  scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
  if(h1>h2)
      {
          t1=h1-h2;
          t2=m1-m2;
      }
      else
      {
         t1=h2-h1;
         t2=m2-m1;
      }
      printf("%d",t1);
      printf(" ");
      printf("%d",t2);
      
}
