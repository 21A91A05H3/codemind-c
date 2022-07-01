#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],es=0,os=0,diff=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            os=os+arr[i];
        }
    }
    diff=es-os;
    printf("%d",abs(diff));
}