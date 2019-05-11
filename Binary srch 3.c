#include<stdio.h>
int binary(int a[],int n)
{
    int fst=0,lst=4,mid;

    while(fst<=lst)
    {
        mid=(fst+lst)/2;
        if(a[mid]==n)
        {
            return mid;
        }
        else if(a[mid]>n)
        {
            lst=mid-1;
        }
        else if(a[mid]<n)
        {
            fst=mid+1;
        }
    }
    return -1;
}
int main()
{
    int a[100],i,n,res;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("What you want to check\n");
    scanf("%d",&n);
    res=binary(a,n);
    if(res!=-1)
    {
        printf("Index %d\n",res);
    }
    else
    {

        printf("did not match\n");
    }
    return 0;
}
