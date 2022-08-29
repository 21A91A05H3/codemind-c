#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}