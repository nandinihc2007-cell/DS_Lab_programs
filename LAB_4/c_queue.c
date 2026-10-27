#include <stdio.h>
#define MAX 3
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int data){
if((front==0 && rear==MAX-1)|| front==rear+1){
printf("Queue Overflow.\n");
return;
}
if(front==-1 && rear==-1){
front=0;
rear=0;
}else if(rear==MAX-1||front!=0){
rear=0;
}else{
rear=rear+1;
}
queue[rear]=data;
printf("%d is inserted.\n",data);
}
int dequeue(){
if(front==-1){
printf("Queue Underflow.\n");
return -1;
}
int value=queue[front];
if(front==rear){
front=-1;
rear=-1;
}else if(front==MAX-1){
front=0;
}else{
front=front+1;
}
printf("%d is removed.\n",value);
return value;
}
void display(){
if(front==-1){
printf("Queue is empty.\n");
return;}
printf("Elements are:");
for(int i=front;i<=rear;i++){
printf("%d\n",queue[i]);
}
}
int main(){
int data,choice;
printf("Menu:\n1.Insert.\n2.Delete.\n3.Display\n");
while(1){
printf("\nEnter choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter element:");
scanf("%d",&data);
enqueue(data);
break;
case 2:
int value=dequeue();
break;
case 3:
display();
break;
default:
printf("Invalid choice.\n");
}
}
return 0;}
