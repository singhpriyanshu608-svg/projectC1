#include<Stdio.h> 
// swap max and min number of array

int swapMm(int arr[] , int size){
int max = arr[0];
int min = arr[0];
int temp = 0;
for(int i = 0 ; i<size ; i++){
    if(arr[i]>max){
    max = arr[i];
    }
    if(arr[i]<min){
        min = arr[i];
    }
}
printf("before swapping max is %d\n" , max);
printf("before swapping min is %d\n" , min);
temp = max;
max = min;
min = temp;
printf("after swapping max is %d\n" , max);
printf("after swapping min is %d\n" , min);
}
int UniqeV(int arr[] , int size){
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("Unique element: %d\n", arr[i]);
        }
    }
}
int insn(int arr[] , int arr1[] ,int size , int size1){
    printf("Intersection elements are: ");

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size1; j++) {
            if (arr[i] == arr1[j]) {
                printf("%d ", arr[i]);
                break; // avoid printing duplicates if they appear again
            }
        }
    }
    printf("\n");
}
void intersection(int arr[], int size, int arr1[], int size1) {
    int intarr[100];  // store intersection elements (max size = 100)
    int count = 0;    // track number of elements added

    // Find common elements
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size1; j++) {
            if (arr[i] == arr1[j]) {
                // Check if already added (to avoid duplicates)
                int alreadyAdded = 0;
                for (int k = 0; k < count; k++) {
                    if (intarr[k] == arr[i]) {
                        alreadyAdded = 1;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    intarr[count] = arr[i];
                    count++;
                }
            }
        }
    }

    // Print intersection array
    if (count == 0) {
        printf("No intersection elements.\n");
    } else {
        printf("Intersection array: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", intarr[i]);
        }
        printf("\n");
    }
}
int main(){
int arr[] = {3,5,2};
int arr1[] = { 8, 3, 2};
int sz = sizeof(arr)/sizeof(arr[0]);
// UniqeV(arr , sz);
insn(arr , arr1 , 3 ,3 );
    return 0;
}