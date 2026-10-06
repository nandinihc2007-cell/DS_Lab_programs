#include <stdio.h>
#define MAX 3
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int element){
if(front==0 && rear==MAX-1){
printf("Queue Overflow.\n");
return;
}
if(front==-1 && rear==-1){
front=rear=0;
}else{
rear++;
}
printf("Inserted successfully.\n");
queue[rear]=element;
}
int dequeue(){
if(front==-1 || front>rear){
printf("Queue Underflow.\n");
return -1;
}
int val=queue[front];
front++;
printf("%d Removed successfully.\n",val);
return val;
}
void display(){
if(front==-1){
printf("Queue is empty.\n");
}else{
for(int i=front;i<=rear;i++){
printf("Element %d=%d\n",i+1,queue[i]);
}
}}
int main(){
int choice,number;
while(1){
printf("--MENU--\n1.Insert\n2.Delete\n3.Display\n");
printf("Enter choice(1-3):");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter number:");
scanf("%d",&number);
enqueue(number);
break;
case 2:
int data=dequeue();
break;
case 3:
display();
break;
default:
printf("Invalid choice.\n");
}
}
return 0;
}
