/*This morning Ethan Steele wants to jump a little. In a few minutes he will arrive at the point 0. Then he will perform a lot of jumps 
in such a sequence: 1-jump, 2-jump, 3-jump, 1-jump, 2-jump, 3-jump, 1-jump, and so on.

1-jump means that if Ethan is at the point x, he will jump to the point x+1.

2-jump means that if Ethan is at the point x, he will jump to the point x+2.

3-jump means that if Ethan is at the point x, he will jump to the point x+3.

Before the start Ethan asks you: will he arrive at the arrival point( user- input)*/

#include<stdio.h>
#include<math.h>
void main()
{
    //enter point Ethan asks about
    int t;
    scanf("%d", &t);
    long int i=0,j=1;
    
    int flag=0, res=0;
    while(i<=t)
    {
        if(t==0)
        flag++;
        if(j==1)
        {
            res=res+1;
            j++;
        }
        else if(j==2)
        {
            res=res+2;
            j++;
        }
        else
        {
            res=res+3;
            j=1;
        }
        i++;
        if(res==t)
        flag++;
    }
    if(flag==1)
    printf("yes\n");
    else
    printf("no\n");
}
