
//program to implement linear queue using array
#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;


void insert(int);
int delete(void);
int peek(void);
int checkEmpty(void);
int checkFull(void);
void display(void);

void main()
{
    int choice;
    while(choice!=7){
        printf("MENU \n");
        printf("1. INSERT \n");
        printf("2. DELETE \n");
        printf("3. PEEK \n");
        printf("4. CHECK EMPTY \n");
        printf("5. CHECK FULL \n");
        printf("6. DISPLAY \n");
        printf("7. EXIT \n");
        printf("Enter your option: ");
        scanf("%d ", &choice);
        
        if(choice==1){
            int flag1=checkFull();
            if(flag1==1){
                printf("Element cannot be added. \n");
            }
            else{
                int val1;
                printf("Enter number to be inserted: ");
                scanf("%d \n", &val1);
                insert(val1);
            }
        }
        
        if(choice==2){
            int flag2=checkEmpty();
            if(flag2==1){
                printf("Element cannot be deleted. \n");
            }
            else{
                int deletedNum=delete();
                printf("The  deleted number is: %d", deletedNum);
            }
        }
        
        if(choice==3){
            int flag2=checkEmpty();
            if(flag2==1){
                printf("Element cannot be deleted. \n");
            }
            else{
                peek();
            }
        }
        if(choice==4){
            int flagEmpty = checkEmpty();
            if(flagEmpty==1){
                printf("Queue is empty! \n");
            }
        }
        
        if(choice==5){
            int flagFull = checkFull();
            if(flagFull==1){
                printf("Queue is Full! \n");
            }
        }
        
        if(choice==6){
            display();
        }
    }
}

int checkEmpty(){
    if(front==-1 && rear ==-1){
        return 1;
    }
}

int checkFull(){
    if(rear==MAX-1){
        return 1;
    }
}

void insert(int num1){
    if(front==-1 && rear == -1){
        front=0;
        rear=0;
    }
    else{
        rear++;
    }
    queue[rear]=num1;
}

int delete(){
    int num2=queue[front];
    front++;
    if(front>rear){  //condition in which last element in the list is removed
        front=-1;
        rear=-1;
    }
    return num2;
}

int peek(){
    return queue[front];
}

void display(){
    for(int i=front;i<rear;i++){
        printf("%d  ",queue[i]);
    }
}


















