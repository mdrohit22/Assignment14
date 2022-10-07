

#include <stdio.h>
void copy_the_elements(int *p , int *a , int size)
{
    for(int i = 0; i<size; i++)
    {
        p[i] = a[i];
        
    }
}
int main()
{
    int arr[5] , brr[5];
    printf("Enter number");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    copy_the_elements(brr , arr, 5);
    
    for (int i = 0; i < 5; i++)
        printf("%d ", brr[i]);
    

    return 0;
}
