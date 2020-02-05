#include<stdio.h>
int main()
{
    int a[100],n,i,x;
    printf("enter the number of input : ");
    scanf("%d",&n);
    printf("\n");
    printf("enter the input : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("enter the position of delete input : ");
    scanf("%d",&x);
    printf("\n");
    printf("delete array : ");
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=x;i<n-1;i++)
    {
        a[i]=a[i+1];
        printf("%d ",a[i]);
    }
    getch();
}

