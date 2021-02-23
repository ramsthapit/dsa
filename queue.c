#include<stdio.h>
#include<conio.h>
 int size,rear=0,front=0,queue[50],data,result;
 void enqueue()
 {
     if(rear==size)
        printf("queue overflow");
     else
     {
         printf("enter data :");
         scanf("%d",&queue[rear]);
         rear++;
     }
 }
 void dequeue()
 {
     if(rear<front)
        printf("queue underflow");
     else
     {
         result=queue[front];
         front++;
     }
 }
 void display()
 {
     int i;
     i=front;
     printf("queue\n");
     while(i!=size)
     {
         printf("%d\n",queue[i]);
         i++;
     }
 }
 int main()
 {
     int n;
     printf("enter size of queue");
     scanf("%d",&size);
     printf("enter the choice\n1)enqueue\n2)dequeue\n3)display\n");
     top:
     scanf("%d",&n);
     switch(n)
     {
     case 1:
        enqueue();
        break;
     case 2:
        dequeue();
        break;
     case 3:
        display();
        break;
     default:
        printf("enter from 1 to 3");
        return 0;
        exit(0);
     }
     goto top;
     return 0;
 }
