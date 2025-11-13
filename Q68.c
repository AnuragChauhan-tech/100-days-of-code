
#include <stdio.h>
int main(){
    
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int pos;
    printf("Enter position of element to be deleted: ");
    scanf("%d",&pos);
    
    for (int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    arr[n-1]='\0';
    printf("Array after deletion: ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}