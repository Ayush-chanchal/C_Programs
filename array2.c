#include<stdio.h>
#include<stdlib.h>


// int sum(int arr[])
// {   int sum=0;
//     for(int i=0;i<6;i++)
//         {
//             sum=sum+arr[i];
//         }
//         return sum;
// }
int sum(int []);

void main()
{
    //system("cls");
    int arr[6]={22,32,34,345,23.1};
    int summ=sum(arr);
    printf("%d",summ);
}

int sum(int arr[])
{   int sum=0;
    for(int i=0;i<6;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
}


