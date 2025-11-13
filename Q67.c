
#include <stdio.h>
int main(){
    
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int pos,ele;
    printf("Enter position and element to be inserted: ");
    scanf("%d %d",&pos,&ele);
    
    for (int i=pos;i<n+1;i++){
        int temp=arr[i];
        arr[i]=ele;
        ele=temp;
    }
    
    printf("Array after insertion: ");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}