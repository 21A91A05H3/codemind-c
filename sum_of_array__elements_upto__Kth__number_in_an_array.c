#include<stdio.h>
int main()
{
    int n,i,arr[100],k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
        if(arr[i]==k)
        {
            break;
        }
    }
    printf("%d",s);
}