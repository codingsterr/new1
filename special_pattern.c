#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n-1;j++)
        { if(j>=n-1-i&&j<=n-1+i)
         printf("*");
         else
         printf(" ");
        }
        printf("\n");
    }
}