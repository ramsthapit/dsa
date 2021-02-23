#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10
int stack[size], top=0, n;
int result;
void push()
{
    if(top>=size)
    {
        printf("Stack overflow!!!");
        return;
    }
    else
    {
        printf("Enter the number to be pushed:\n");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        printf("\n%d is Pushed!!",stack[top]);
        return;
    }
}
void pop()
{
    if(top==0)
    {
        printf("\nStack underflow");
        return;
    }
    else
    {
        result=stack[top];
        top--;
        printf("%d is required from the stack",result);
        return;
    }
}
void display()
{
    int i;
    if (top==0)
    {
        printf("stack underflow!");
        return;
    }
    for(i= top;i>0;i--)
    {
        printf("\n%d",stack[i]);
    }
}
int main()
{
    int c;
    printf("\n1.push\n2.pop\n3.display\n");
    do{
        printf("\nEnter the option:\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:printf("Content are:\n");
                    display();
            break;
            default:
                printf("invalid option");
                exit(0);
        }
    }while(c<4);
    return 0;
}
