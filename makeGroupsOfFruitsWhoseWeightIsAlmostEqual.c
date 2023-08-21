#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int p[100],a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    //finding maximum weight
    int maxWeight=p[0];
    int j;
    for(int i=0;i<n;i++)
    {
        if(maxWeight<p[i])
        {
            maxWeight=p[i];
            j=i;
        }
    }
    //finding sum of other weights
    int sum=0;
    for(int i=0,k=0;i<n;i++,k++)
    {
        if(i==j)
        continue;
        else
        {
            sum=sum+p[i];
            a[k]=p[i];
        }
    }
    for (int i = 0; i < n; i++) 
        {
            printf("%d\n", a[i]);
        }
 
    //arranging remaining emelents in descending order
    for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (a[i] < a[j]) 
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    
    //combinations of different fruits
    /*if(sum>=max)
    {
        for(int i=0;i<n;i++)
        {
                int w1=sum,w2=max;
                //loop for minimum difference
            for(int j=0;j<=i;j++)
            {
                //loop for w1
                w1=
            }
            for(int k=0;k<=n-i;k++)
            {
            //loop for w2
            }
        }
    }*/
    return 0;
}
