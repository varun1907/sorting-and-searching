// program to find three integers whose sum is equal to given integer z
#include<stdio.h>
void sumof3(int [],int,int);
int main()
   {
       int a[100],lim,i,sum;
       printf("enter the limit of array\n");
       scanf("%d",&lim);
       printf("enter the elements");
       for(i=0;i<lim;i++)
       {
           scanf("%d",&a[i]);
       }
       printf("enter the value");
       scanf("%d",&z);
       sumof3(a,lim,z);
       return 0;
   }
void sumof3(int a[],int lim,int z)
{
    int i,j,k;
     for(i=0;i<lim-2;i++)
       {
          for(j=i+1;j<lim-1;j++)
              {
                  for(k=i+2;k<lim;k++)
                     {
                         if(a[i]+a[j]+a[k]==z)
                             {
                                printf("%d %d %d",a[i],a[j],a[k]);
                                break;
                             }
                          else
                             {
                                 printf("there are no elements in array which satisfy following equation");
                             }
                     }
              }
       }
}




