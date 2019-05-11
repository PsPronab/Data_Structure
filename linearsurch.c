#include<stdio.h>
int main()
{
    int data [100];
    int i,n,loc,item;
    printf("Enter total element\n");
    scanf("%d",&n);
     printf("Enter given data\n");
     for(i=1;i<=n;i++)
     {
          scanf("%d",&data[i]);
     }

     printf("surch data\n");
     scanf("%d",&item);
     data[n+1]=item;
     loc=1;
     while(data[loc]!=item)
     {
         loc=loc+1;
     }
    if(loc==n+1)
    {
        printf("not found\n");
    }
    else
    {
         printf("position: %d\n",loc);
    }


    return 0;
}
