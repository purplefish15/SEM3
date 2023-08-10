#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
};
struct queue
{
    int first,rear;
    unsigned MAX;
    struct student *arr;

};

//There are two queues and we must add/remove students in each queue.
void display(void);     //function prototyping
void delete(void);  
void insert(void);
void peek(void);
int checkFull(struct queue *);
int checkEmpty(struct queue *);
void main()
{
    
    struct queue q1,q2;
    int n;
    q1.arr=(struct student *)malloc(MAX*sizeof(q1.arr));
    q2.arr=(struct student *)malloc(MAX*sizeof(q2.arr))
    do {
        printf("\n Enter choice of queue (1 or 2): ");
        scanf("%d",&n);
        struct queue *qptr;
        if(n==1)
        qptr=&q1;
        else
        qptr=&q2;
        printf("\n Enter maximum number of elements that can be added in the queue: ");
        scanf("%d",(&qptr.MAX));
        q1.first=0;
        q1.rear=-1;
        q2.first=0;
        q2.rear=-1;
        q1.a=NULL;
        q2.a=NULL;
        printf("\n 1. Check Empty:  ");
        printf("\n 2. Check Full: ");
        printf("\n 3. Display elements in the Queue: ");
        printf("\n 4. Insert element in the Queue from rear: ");
        printf("\n 5. Delete first element in the Queue: ");
        printf("\n 6. Quit");
        printf("\n Enter the operation to be performed: ");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
            int check1=checkEmpty(&qptr);
            if(check1==1)
            printf("\n The list is EMPTY.");
            break;
            case 2:
            int check2=checkFull(&qptr);
            if(check2==1)
            printf("\n The list is FULL.");
            break;
            case 3:
            display();
            break;
            case 4:
            int n1=checkFull(&qptr);
            if(n1==1)
            printf("\n OVERFLOW condition. Cannot add given element.");
            else
            {
                printf("\n Enter value to be added at rear: ");
                int val;
                scanf("%d",&val);
                insert();
            }
            break;
            case 5:
            int n2=checkEmpty(&qptr);
            if(n2==1)
            printf("\n UNDERFLOW condition. Cannot delete given element.");
            else
            {
                printf("\n Enter value to be removed from front: ");
                int val2;
                scanf("%d",&val2);
                delete();
            }
            break;
        }
    }while(num!=5);


int checkEmpty(struct queue *temp)
{
    if(*temp.first==-1 || *temp.first>*temp.last)
    return 1;   //checking UNDERFLOW condition
}


int checkFull(struct queue *temp)
{
    if(*temp.last==(*temp.MAX-1))
    return 1;   //checking OVERFLOW condition
}


void insert(struct queue *q,int val1)
{
        *q.rear++;
        *q.rear=val1;
}


void delete(struct queue *q, int val1)
{
    val2=*q.front;
    *q.front++;
}
}
