#include<stdio.h>
int main()
{
    int a[100][100],i,r,c,n,j;
    scanf("%d%d",&r,&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            if(i%2==0){
                printf("%d ",a[i][j]);
            }

            else
            {
                printf("\n");
                for(j=c-1; j>=0; j--)
                {
                    printf("%d ",a[i][j]);
                }
                    printf("\n");
                break;
            }
    return 0;
}

