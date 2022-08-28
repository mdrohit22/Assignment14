#include<stdio.h>

int main(){
    int arr[10] , sum =0;
    printf("Enter 10 number");
    for(int i=0; i<10; i++)
    scanf("%d", &arr[i]);
    for(int i=0; i<10;i++)
    sum += arr[i];
    printf("sum of these 10 number is %d ", sum);

    
    return 0;
}