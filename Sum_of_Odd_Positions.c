#include<stdio.h>
int main()
{
    int n,sum=0,os,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      if(i%2==1)
       {
           sum=sum+arr[i];
       
       }
        
    }
     printf("%d",sum);
}