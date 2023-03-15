#include<stdio.h>

void main() {
    int i,j,temp,size;
    int arr[10];
    printf("\n Enter the size of array:");
    scanf("%d",&size);
    printf("\n Enter the array .......");
    for (i=0; i<size; i++) {
        printf("\nenter the element %d =",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nentered array is:...\n");
    for (i=0; i<size; i++) {
        printf("\t%d",arr[i]);
    }
    // bubble sort algorithm
    for (i=0; i<size-1; i++) {
        for (j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        // print the current state of the array
        printf("\nAfter iteration %d: ", i+1);
        for (j=0; j<size; j++) {
            printf("%d ", arr[j]);
        }
    }
}
