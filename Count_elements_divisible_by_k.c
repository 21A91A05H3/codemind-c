#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
