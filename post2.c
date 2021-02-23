#include<iostream>
#include<conio.h>

using namespace std;

int stack[20],top=0;
char inf[40],post[40];
void push(int);
void postfix();
char pop();





int main()
        {
            cout<<"Enter the infix expression";
            cin>>inf;
            postfix();

            return 0;

        }

        void push(int element)
            {
                top++;
                stack[top]=element;

            }


        void postfix()
        {
            int i,j=0;
            for(i=0;inf[i]!=NULL;i++)
            {
                switch(inf[i])
                    {
                    case '+':
                        {
                            while(stack[top]>=1)
                                    post[j++]=pop();

                            push(1);
                            break;
                        }
                     case '-':
                        {
                            while(stack[top]>=1)
                                    post[j++]=pop();

                            push(2);
                            break;
                        }
                     case '*':
                        {
                            while(stack[top]>=3)
                                    post[j++]=pop();

                            push(3);
                            break;
                        }
                     case '/':
                        {
                            while(stack[top]>=4)
                                    post[j++]=pop();

                            push(4);
                            break;
                        }
                     case '^':
                        {
                            while(stack[top]>=4)
                                    post[j++]=pop();

                            push(5);
                            break;
                        }
                     case '(':
                        {


                            push(0);
                            break;
                        }
                     case ')':
                        {
                            while(stack[top]!=0)
                                    post[j++]=pop();
                            top--;


                            break;
                        }
                    default: post[j++]=inf[i];
                    break;
                }
            }
        while(top>0)
            post[j++]=pop();
        cout<<"Postfix expression is:"<<post;

        }

char pop(){
            char e;
            e=stack[top];
            top--;

            switch(e)
                    {
                      case 1:
                          e='+';
                      break;
                      case 2:
                          e='-';
                      break;
                      case 3:
                          e='*';
                      break;
                      case 4:
                          e='/';
                      break;
                      case 5:
                          e='^';
                      break;
                      default:
                        cout<<"invalid";
                        break;
                     }
                    return e;


          }
