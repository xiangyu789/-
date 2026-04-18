#include<stdio.h>
int lj(int n)
{
    if(n==1)
    return 1;
    else if (n>1)
    {
    return n+lj(n-1);
    }
}
int san(int n)
{
    if(n==1)
    return 1;
    else{
        return san(n-1)+lj(n-1);
    }
}
int main()
{
    int n,i,arr[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(n==1)
        {
            printf("1");
        }
        else
        printf("%d\n",arr[i]+(arr[i]-1)+(arr[i]-2)+san(n));
    }
    return 0;
}
