#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, element;
    bool found = false;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            found = true;
            break;
        }
    }

   
    if (found)
    {
        printf("Element %d found at index %d.\n", element, i);
    }
    else
    {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}