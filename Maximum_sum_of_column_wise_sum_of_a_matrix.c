#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[n][n],sum=0,i,j,res=0,diff=0,v;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        v=0;
        for(j=0;j<m;j++)
        {
            v+=a[j][i];
        }
        if(v>diff)
        {
            diff=v;
        }
    }
    printf("%d",diff);
}