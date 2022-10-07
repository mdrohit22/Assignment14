
#include <stdio.h>
void reverse(int *p, int size)
{
    int temp;
    for(int i = 0; i<(size/2); i++)
    {
        temp = p[i];
        p[i] = p[size -i-1];
        p[size -i-1] = temp;
    }
}
int main()
{
    int arr[5];
    printf("Enter number");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    reverse(arr, 5);
    for (int j = 0; j < 5; j++)
        printf("%d ", arr[j]);
    

    return 0;
}
