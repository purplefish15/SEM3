#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct stack
{
    unsigned top;
    unsigned MAX;
    struct student *a;
};
struct student
{
    int rollNo;
};

void main()
{
    struct stack *sptr;
    struct stack s1,s2;
    s1.top=s2.top=0;
    s1.a=s2.a=NULL;
    int stchoice, num;
    printf("\n Enter the maximum number of elements for s1: ");
    scanf("%u",&s1.MAX);
    printf("\n Enter the maximum number of elements for s2: ");
    scanf("%u",&s2.MAX);
    printf("\n Enter the choice of stack: (1 or 2)");
    scanf("%d",&stchoice);
    if(stchoice==1)
    *sptr=s1;
    else
    *sptr=s2;
    printf("\nMENU");
    printf("\n 1. Adding. ");
    printf("\n 2. Deleting. ");
    printf("\n 3. Peek.");
    printf("\n 4. Display all elements. ");
    scanf("%d",&num);
    if(num==1)
    {
        int flag1=isFull(sptr);
        if(flag1==1)
        printf("\n OVERLOAD!!");
        else
        {
            struct student new;
            printf("\n Enter roll no. of new student: ");
            scanf("%d",&new);
            push(sptr, new);
        }
    }
    else if(num==2)
    {
        int flag2=isEmpty(sptr);
        if(flag2==1)
        printf("\n UNDERFLOW!!");
        else
        {
            pop(sptr);
        }
    }
    else if(num==3)
    {
        peek(sptr);
    }
    else if(num==4)
    {

    }

}

char isEmpty(struct stack *x)
{
    if((*x).top==0)
    return 1;
    else 
    return 0;
}
char isFull(struct student *x)
{
    if((*x).top==((*x).MAX-1))
    return 1;
    else
    return 0;
}

unsigned peek(struct student *x)
{
    return (*x).top;
}
/*In the above function, last element of the list cannot be modified.
To enable modification, try the below code in place of return (*x).top :
return (*x).a[(*x).top] */

void push(struct stack *x, struct student s)
{
    ((*x).top)++;
    (*x).a[(*x).top]=s;
}

void pop(struct stack *x)
{
    (*x).top--;
}
void display(struct stack *x)
{
    
}
/*Above function 'kills' the popped element. In case the caller 
function wants to use the popped variable, only the copy can be
returned and return type of the function is struct student. 
Use the following code instead of     (*x).top--: 
struct student temp;
temp=(*x).a[(*x).top];
(*x).top--;
return temp;
*/