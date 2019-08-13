/*NAME: K.ARUN TEJA
  USN:1BM18CS041
  PROGRAM:STACK FUNCTIONS*/


#include<stdio.h>

void push(int ele,int s[100],int *top); /*declaration of push*/
void display(int s[100],int top);  /*declaration of display*/
int pop(int s[100],int *top); /*declaration of pull*/


/*Main function to call other functions*/
int main()
{
    int stack[100],top=-1,x;
    int ele,num=-1;
    while(num!=0)
    {
      printf("Enter 1 to push,2 to display,3 to pop,0 to exit\n");
      scanf("%d",&num);

        switch(num) /*switch statement for user-defined experience*/
            {
                case 1:printf("Enter the element to push");
                        scanf("%d",&ele);
                        push(ele,stack,&top); /*push call*/
                        display(stack,top);
                        break;
                case 2:display(stack,top); /*display call*/
                        break;
                case 3:x=pop(stack,&top); /*pop call*/
                        if(x!=-9999)
                            printf("Popped element is %d \n",x);
                            display(stack,top);
                            break;
                default:printf("Click any key to exit");
                        break;
            }
    }
return 0;
}


/* push function that pushes the element to the array(stack)*/
void push(int ele,int s[100],int *top)
{
    if(*top==99)
    {
        printf("Stack overflow");
        return;
    }
*top=*top+1;
s[*top]=ele;
}

/*display function to display elements of stack*/
void display(int s[100],int top)
{
    int i;
    if (top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    for(i=top;i>=0;i--)
        printf("%d\n",s[i]);
}


/*pop function to pop out top element of array*/
int pop(int s[100],int *top)
{
    int ele;
    if(*top==-1)
    {
        printf("Stack underflow\n");
        return -9999;
    }
ele=s[*top];
*top=*top-1;
return ele;
}
