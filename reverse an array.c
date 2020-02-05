#include<stdio.h>
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=5;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

