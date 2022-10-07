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

int find_second_small_number(int *p , int size)
{
    sort(p, size);
    return p[1];
    
    
}
int main()
{

    int arr[5] , second_s;
    printf("Enter number");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    second_s = find_second_small_number(arr , 5);
    printf("%d", second_s);
    
    
    return 0;
}