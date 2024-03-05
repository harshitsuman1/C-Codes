#include<stdio.h>
int main()
{
    int arr[12];
    int sum=0,avg,max=0,min=0;
    int mn=1,mx;
    for(int i=0;i<12;i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0],min=arr[0];
    for(int i=0;i<12;i++)
    {
        sum+=arr[i];
    }
    avg = sum/12;
    for(int i=0;i<12;i++)
    {
        if(max<arr[i]){
             max=arr[i];
             mx=i+1;
        }
           
        if(min>arr[i]){
            min=arr[i];
            mn=i+1;
        }
            
    }
    printf("%d \n", sum);
    printf("%d \n", avg);
    printf("%d \n", mn);
    printf("%d \n", mx);
}