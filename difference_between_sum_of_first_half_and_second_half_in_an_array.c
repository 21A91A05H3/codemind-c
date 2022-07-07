#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],s1,s2,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1=s1+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        s2=s2+arr[i];
    }
    d=s1-s2;
    printf("%d",abs(d));
}