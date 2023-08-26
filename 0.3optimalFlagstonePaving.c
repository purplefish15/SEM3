/*In the bustling city of Urbana, the Plaza Promenade takes the shape of a rectangular area measuring n×m
meters. To commemorate a special occasion, the city plans to adorn the plaza with square granite flagstones,
each having sides of length a×a meters.

While exceeding the boundaries of the Plaza Promenade is acceptable, the entire plaza must be covered using
complete flagstones. What is the smallest possible number of flagstones needed to accomplish this paving 
task?*/
#include<stdio.h>
void main()
{
    int n,m,a;
    scanf("%d %d %d",&m,&n,&a);
    int count1=0,count2=0;
    int sum2=0,sum1=0;
    while(sum2<=m)
    {
        sum2=sum2+a;
        count2++;
    }
    while(sum1<=n)
    {
        sum1=sum1+a;
        count1++;
    }
    printf("%d\n",count1*count2);
}
