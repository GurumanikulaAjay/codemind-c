#include<stdio.h>
int main()
{
    int a,b,s=0,i,j,arr[10][10];
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==0 ||i==a-1)
            {
                s+=arr[i][j];
            }
            else if((j==0 || j==b-1) || (i==a-1 && j==b-1))
            {
                s+=arr[i][j];
            }
        }
    }
    printf("%d",s);
}