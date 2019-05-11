#include<stdio.h>
int main()
{
    int a[100],i,n,fst,lst,x,mid,b;
    printf("How much number you want take\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number what you want to check\n");
    scanf("%d",&x);
    fst=0;
    lst=n-1;
    while(fst<=lst)
    {
        mid=(fst+lst)/2;
        if(a[mid]==x)
        {
            b=mid;
            break;
        }
        else
        {
            if(a[mid]>x)
            {
                fst=0;lst=mid-1;
            }
            else if(a[mid]<x)
            {
                fst=mid+1;lst=n-1;
            }
        }
    }
    if(a[mid]==x)
    {
        printf("Index %d\n",b);
    }
    else
    {
        printf("Did not match\n");
    }
    return 0;
}


