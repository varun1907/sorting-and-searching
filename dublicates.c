// program to find if duplicates  are present in array

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[10],i,n,flag=0;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
       {
            scanf("%d",&a[i]);
       }
    for(i=0;i<n;i++)
       {
            if(a[abs(a[i])]>0 && a[abs(a[i])]!=n)
               {
                    a[abs(a[i])]=a[abs(a[i])]*-1;
               }
             else if(a[abs(a[i])]<0 || a[abs(a[i])]==n)
                {
                     printf("yes");
                     flag=1;
                     break;
                }
             else
                {
                    a[abs(a[i])]=n;
                }
       }
      if(flag==0)
         {
            printf("no");
         }
         return 0;
}
