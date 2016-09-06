// Program to find n indices in given array which satisfy following equation
//     a[i]^2 + a[j]^2 = a[k]^2


#include<stdio.h>
void pythagorus(int [],int);
int main()
{
    int a[100],i,lim;
    printf("enter the limit of array\n");
    scanf("%d",&lim);
    printf("enter the elements of array\n");
    for(i=0;i<lim;i++)
       {
            scanf("%d",&a[i]);
       }
     for(i=0;i<lim;i++)
       {
            a[i]=a[i]*a[i];
       }
     pythagorus(a,lim);
     return 0;

}
void pythagorus(int a[],int lim)
{
    int i,j,k;
    for(i=0;i<lim-2;i++)
       {
          for(j=i+1;j<lim-1;j++)
              {
                  for(k=i+2;k<lim;k++)
                     {
                         if(a[i]+a[j]==a[k])
                             {
                                printf("%d %d %d",i,j,k);
                             }
                          else
                             {
                                 printf("there are no elements in array which satisfy following equation");
                             }
                     }
              }
       }
}
