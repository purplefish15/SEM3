/*No. of levels =X
  Time taken for each level=Y
  Time taken in the break=Z
  NOTE-Breaks are taken after every 3 levels
  TO FIND- Total time taken to complete the game. */

#include<stdio.h>
int timeFunction(int X, int Y, int Z)
{
    //Two variables: one for time taken in playing and another
    //for time taken in breaks
    int gamingTime=X*Y;
    //Loop for breaks
    int breaks=0;
    while(X>3)
    {
        X=X-3;
        breaks++;
    }
    int breakTime=breaks*Z;
    int TOTAL=gamingTime+breakTime;
    return(TOTAL);
}
void main(){
    int T,X,Y,Z;
    int TOT[100];
    //Input no. of test-cases
    scanf("%d\n",&T);
    //Input X,Y,Z
    int T1=T;
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d",&X,&Y,&Z);
        TOT[i]=timeFunction(X,Y,Z);
    }
    for(int i=0;i<T1;i++)
    {
        printf("%d \n",TOT[i]);
    }
}
