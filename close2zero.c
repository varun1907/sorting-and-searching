#include<stdio.h>
#include<stdlib.h>
void close2zero(int [],int);
int main()
{
    int lim,i,a[100];
    printf("enter the limit");
    scanf("%d",&lim);
    printf("enter the elements");
    for(i=0;i<lim;i++)
    {
        scanf("%d",&a[i]);
    }
    close2zero(a,lim);
    return 0;

}
void close2zero(int a[],int lim)
{
    int i,sum,secsum,j,pos1,pos2;
    sum=abs(a[0]+a[1]);
    for(i=0;i<lim-1;i++)
    {
        for(j=i+1;j<lim;j++)
        {
            secsum=abs(a[i]+a[j]);
            if(sum>secsum)
            {
                sum=sum;
                pos1=i;
                pos2=j;

            }

        }

    }
    printf("%d %d",a[pos1],a[pos2]);
}

