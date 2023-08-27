#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct student
{
    int rollNo;
};

struct stack
{
    unsigned top;           //one memory location is wasted [0th location]
    unsigned MAX;
    struct student *a;      //on adding const, an error is thrown in push function, line 100
};

//function prototyping
char isEmpty(struct stack *);
char isFull(struct stack *);
unsigned peek(struct stack *);
void push(struct stack *, struct student);
void pop(struct stack *);

void main()
{
    int stchoice, num;
    struct stack *sptr;
    struct stack s1,s2;
    s1.top=s2.top=0;
    s1.a=s2.a=NULL;
    while(1)
    {
        printf("Enter the maximum number of elements for s1: \n");
        scanf("%u",&s1.MAX);
        printf("Enter the maximum number of elements for s2: \n");
        scanf("%u",&s2.MAX);
        printf("Enter the choice of stack: (1 or 2)\n");
        scanf("%d",&stchoice);
        if(stchoice==1)
        sptr=&s1;
        else
        sptr=&s2;
        printf("MENU\n");
        printf("1. Adding.\n ");
        printf("2. Deleting.\n ");
        printf("3. Peek.\n");
        printf("4. Exit\n");
        scanf("%d",&num);
        if(num==1)
        {
            char flag1=isFull(sptr);
            if(flag1==1)
            printf("OVERLOAD!!\n");
            else
            {
                struct student new;
                printf("Enter roll no. of new student: \n");
                scanf("%d",&new);
                push(sptr, new);
            }
        }
        else if(num==2)
        {
            char flag2=isEmpty(sptr);
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
            return(0);
        }
    }
}

char isEmpty(struct stack *x)
{
    if((*x).top==0)
    return 1;
    else 
    return 0;
}
char isFull(struct stack *x)
{
    if((*x).top==((*x).MAX-1))
    return 1;
    else
    return 0;
}

unsigned peek(struct stack *x)
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
/*Above function 'kills' the popped element. In case the caller 
function wants to use the popped variable, only the copy can be
returned and return type of the function is struct student. 
Use the following code instead of     (*x).top--: 
struct student temp;
temp=(*x).a[(*x).top];
(*x).top--;
return temp;
*/
