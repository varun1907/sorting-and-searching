//program to find if majority exists

#include<stdio.h>
void majority(int [],int);
int main()
{
    int i,a[100],lim;
    printf("enter the limit");
    scanf("%d",&lim);
    printf("enter the elements");
    for(i=0;i<lim;i++)
      {
         scanf("%d",&a[i]);
      }
    majority(a,lim);
    return 0;
}
void majority(int a[],int lim)
{
    int i,j,c=0,b[100]={0};
    for(i=0;i<lim-1;i++)
       {
         c = b[a[i]]++;
       }
    if(c >lim/2)
          {
              printf("yes");
          }
          else
          {
              printf("no");

          }
}


