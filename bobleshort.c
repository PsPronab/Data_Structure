#include<stdio.h>
int main()
{
    int i,n,j,temp;
    printf("how much element\n");
    scanf("%d",&n);
    int num[n];
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&num[i]);

    }

    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
     {
         printf("%d ",&num[i]);
     }
    return 0;
}
