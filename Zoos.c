








#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,d=0,x=0;
    scanf("%s",str);
    int v=strlen(str);
    for(i=0;i<v;i++)
    {
        if(str[i]==122)
        {
            d++;
        }
        else if(str[i]==111)
        {
            x++;
        }
    }
   // printf("%d%d",d,x);
    if(x==(2*d))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
}
