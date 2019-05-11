#include<stdio.h>
int main()
{
    int a[10],n,i,fst=0,lst=7,b,z=-1;

    printf("Enter the number one by one\n");
    for(i=0; i<7; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number what you want to check\n");
    scanf("%d",&n);
    do
    {
        b=(fst+lst)/2;

            if(a[b]==n)
            {
                printf("This number is at index %d\n",b);
                z=1;
            }
            else if(a[b]>n)
            {
                fst=0;
                lst=b-1;
            }
            else if(a[b]<n)
            {
                fst=b+1;
                lst=7;
            }
        }
        while(a[b]!=n);
        if(z==-1)
        {
            printf("Number do not match\n");
        }
        return 0;
    }

