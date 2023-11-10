#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nenter the values in 2d array:\n");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {   printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}