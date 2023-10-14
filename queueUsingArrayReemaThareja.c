//operations on queue
#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1, rear=-1;

void insert(void);
int delete_element(void);
int peek(void);
void dislay(void);

int main(){
    int option, val;
    do{
        printf("*****MENU*****\n");
        printf("1. Insert an element \n");
        printf("2. Delete an element \n");
        printf("3. Peek \n");
        printf("4. Display all elements \n");
        printf("5. EXIT \n");
        printf("Enter choice: \n");
        scanf("%d",&option);
        
        switch(option){
            case 1:
            insert();
            break;
            case 2:
            val=delete_element();
            if(val!=-1){
                printf("The delete number is : %d",val);
            }
            break;
            case 3:
            val=peek();
            if(val!=-1){
                printf("The first value in queue is: %d",val);
            }
            case 4:
            display();
            break;
        }
    }while(option!=5)
    return 0;
}

void insert(){
    int num;
    printf("Enter the number to be inserted in the queue: \n");
    scanf("%d"&num);
    if(rear == MAX-1){
        printf("OVERFLOW \n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
    }
    else{
        rear++;
    }
    queue[rear]=num;
}

int delete_element(){
    int val;
    if(front==-1 || front>rear){
        printf("UNDERFLOW \n");
        return -1;
    }
    else{
        val=queue[front];
        front++;
        if(front>rear){
            front=rear=-1;
        }
        return val;
    }
}

int peek(){
    if(front==-1 || front>rear){
        printf("The queue is empty");
        return -1;
    }
    else{
        return queue[front];
    }
}

void display(){
    int i;
    printf("\n");
    if(front==-1 || front>rear){
        printf("The queue is empty");
        return -1;
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("\t %d", queue[i]);
        }
    }
}





















