// program to sort array by quicksort

#include<stdio.h>
int partition(int[],int,int);
void quicksort(int[],int,int);
int main()
{
    int i,n,a[10];
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
            printf("%d",a[i]);
    }
    return 0;

}
int partition(int a[],int low,int high)
{

    int i=low,j=high;
    int t,pivot_element=a[high];
    while(i<j)
    {
        while(a[i]<pivot_element)
        {

            i++;
        }
        while(a[i]>pivot_element)
        {
            j--;
        }
        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }

    }
    a[high]=a[i];
    a[i]=pivot_element;
    return i;
}
void quicksort(int a[],int low,int high)
{

    int pivot;
    if(low<high)
    {

        pivot=partition(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);

    }
}
