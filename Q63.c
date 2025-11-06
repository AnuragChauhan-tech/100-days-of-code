/*Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/


#include<stdio.h>
int main(){
    int n1;
    printf("enter value of n1:\n");
    scanf("%d",&n1);

    int n2;
    printf("enter value of n2:");
    scanf("%d",&n2);

    
    int arr[n1];
    int array[n2];
    printf("enter numbers for array1:");
    for(int i = 0; i<n1;i++){
        scanf("%d",&arr[i]);


    }
    printf("enter numbers array2");
    for(int i = 0; i<n2;i++){
        scanf("%d",&array[i]);
    }

    //now merging two array;
    int merge[n1 + n2];
    for(int i =0;i<n1;i++){
        merge[i] = arr[i];

    }
    for(int i=0;i<n2;i++){
        merge[n1+i]=array[i];

    }
    printf("new array:");
    for(int i=0;i<n1+n2;i++){
        printf("%d",merge[i]);

    }
    return 0;

}