

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main(){
    int arr[10] ={1,2,8,9,13,36,66,89,100,130};
    int target;
    printf("Enter the target: ");
    scanf("%d",&target);

    int l=0;
    int r=9; 
    int found = 0; 

    while (l <= r){

        int mid = (l + r) / 2; 

        if (arr[mid] > target){
            r = mid - 1;
        } else if(arr[mid] < target){
            l = mid + 1;
        } else {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
    }

    if (!found){
        printf("Element not found in the array.\n");
    }
    return 0;
}