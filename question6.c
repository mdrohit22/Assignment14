#include <stdio.h>

void sort(int *p, int size)
{
    int temp;
    for(int i = 0; i<size; i++)
    {
        for(int j = i; j<size -1; j++)
        {
            if(p[i] > p[j+1])
            {
                temp = p[j+1];
                p[j+1] = p[i];
                p[i] = temp;
            }
        }
        
    }
    
}

void display(int *p  , int size)
{
    for (int j = 0; j < size; j++)
        printf("%d ", p[j]);
    
}
int main()
{

    int arr[5];
    printf("Enter number");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    display(arr, 5);
    printf("\n");
    sort(arr, 5);
    display(arr, 5);
    
    return 0;
}