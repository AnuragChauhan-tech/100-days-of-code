
#include <stdio.h>
int main(){
    int n=10;
    int arr[11] ={1,2,8,9,13,36,66,89,100,130};
    int target;
    printf("Enter the target: ");
    scanf("%d",&target);

    
    int i;
    for (i = 0; i < n; i++){
        if (arr[i] >= target){
            break;
        }
    }

    
    for (int j = n; j > i; j--){
        arr[j] = arr[j - 1];
    }

    
    arr[i] = target;
    n++; 
    printf("Array after insertion: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}