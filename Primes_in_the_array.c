#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,fact,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            c++;
        }
    }
    printf("%d",c);
}