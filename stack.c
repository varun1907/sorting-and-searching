#include<stdio.h>
#define max 20
int push(int [],int);
int pop(int [],int);
void display(int [],int);
int main(){
   int ch,top=-1,a[max];
   do{
         printf("enter your choice\n 1. insertion 2 . deletion 3. displaying\n");
         scanf("%d",&ch);
         switch(ch){
           case 1:
            top=push(a,top);
            break;
           case 2:
            top=pop(a,top);
            break;
           case 3:
            display(a,top);
            break;
           default:
            break;
                   }
   }
  while(ch!=4);
getch();
}
int push(int a[],int top)
{
    int n;
    if(top==max-1)
    {
        printf("stack is full\n");
    }
    else{


        printf("enter element\n");
        scanf("%d",&n);
        top++;
        a[top]=n;
    }
    return top;
}
int pop(int a[],int top)
{
    int n;
    if(top==-1)
     {
        printf("stack is empty\n");
        return top;
     }
     n=a[top];
     printf("element popped is %d\n",n);
     top--;
     return top;
}
void display(int a[], int top)
{
    int i;
    if(top == -1)
    {
        printf("stack is empty\n");
    }
    for(i=top;i>=0;i--){
        printf("%d\n",a[i]);
    }
}




