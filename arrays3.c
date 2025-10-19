// pass by value and pass by function
#include<stdio.h>

void changeArr( int arr[] , int size) {
    printf("IN function");
    for(int i = 0 ; i< size ; i++){
        arr[i] = 2*arr[i];
    }

}
int main(){
    int arr[3] = { 1 , 2, 3};
    changeArr(arr , 3);
    printf("In main");
    for(int i =0 ;i<3 ; i++){
    printf("%d\n" , arr[i]);
    } // arrys in C is pass by reference hence when I put input arr in function I am passing address of first element . hence it directly changes the original array
}

// | Concept                            | Explanation                                     |
// | ---------------------------------- | ----------------------------------------------- |
// | Arrays in C                        | Passed by **reference (address)**, not by value |
// | Primitive types (int, float, etc.) | Passed by **value (copy)**                      |
// | So changes inside function         | Affect the original array                       |
