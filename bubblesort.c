#include<stdio.h>
#include<stdlib.h>

void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;n<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            printf("\n%d\n",a[j]);
        }
        // printf("%d\n",a[i]);
    }
   
    
}

void main()
{
    int a[5],n=5;
    int i;
    printf("\nEnter values in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
}