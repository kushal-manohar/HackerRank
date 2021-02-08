#include<stdio.h>
int main()
{
    int t,count=0;
    int n[1000];
    printf("enter no.of inputs");
    scanf("%d",&t);
    if(t>=1 && t<=1000)
    {   
        printf("enter values");
        for(int i=0;i<t;i++)
        {
            scanf("%d",&n[i]);
        }
        for(int j=0;j<t;j++)
        {
            if(n[j]>20)
            {
                count++;
                 printf("Invalid Scenario %d \n",n[j]);
            }
           
        }
        
        if(count=0)
        {
            for(int k=0;k<t;k++)
            {
               printf("%d \n",fact(n[k])); 
            }
        }
        else 
        {
            return 0;
        }
    }
    else
    {
        printf("Invalid Scenario");
    }
    return 0;
}
int fact(int x)
{
    if(x>1)
    {
        return x*fact(x-1);
    }
    else
    {
        return 1;
    }
}
