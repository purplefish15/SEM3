#include<stdio.h>
#define MAX 100
void main()
{
    int n,k;
    int a[MAX];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0;
    while(a[j]>=a[k])
    {
        if(a[j]<1)
        break;
        j++;
    }
    printf("%d",j);
}
