#include<stdio.h>
int main()
{
    int n,i,arr[100],s=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        while(arr[i]>0)
        {
            r=arr[i]%10;
            s=(s*10)+r;
            arr[i]=arr[i]/10;
        }
        arr[i]=s;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}