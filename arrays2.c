// To find the smallest and the largest element in an array
#include<stdio.h>
//This is the code and It it does not work with all neg and when there is not any neg number 
int main(){ 
// int marks[6] = {-1, -2 , -32 , -1 , -15 ,-24};
// int max =0;
// int min = 0;
//     for(int i=0 ; i<6 ; i++){
//         if(marks[i]>max){
//             max= marks[i];
//         }
//         if(marks[i] < min){
//             min = marks[i];
//         }
//     }
//     printf("largest value in array is %d\n" , max);
//     printf("smallest value in array is %d\n" , min);


// correct code
// int marks[6] = {1 , 3, 6, 4 ,32 , 54};
// int max = marks[0];
// int min = marks[0];
//     for(int i=0 ; i<6 ; i++){
//         if(marks[i]>max){
//             max= marks[i];
//         }
//         if(marks[i] < min){
//             min = marks[i];
//         }
//     }
//     printf("largest value in array is %d\n" , max);
//     printf("smallest value in array is %d\n" , min);


// sec correct method
#include <limits.h>  // for INT_MAX and INT_MIN

    // int marks[6] = {-1, -2, -32, -1, -15, -24};
    // int max = INT_MIN;  // smallest possible int
    // int min = INT_MAX;  // largest possible int

    // for (int i = 0; i < 6; i++) {
    //     if (marks[i] > max) {
    //         max = marks[i];
    //     }
    //     if (marks[i] < min) {
    //         min = marks[i];
    //     }
    // }

    // printf("Largest value in array is %d\n", max);
    // printf("Smallest value in array is %d\n", min);



    
    // int marks[6] = {-1, -2, -32, -1, -15, -24};
    // int max = INT_MIN;  // smallest possible int
    // int min = INT_MAX;  // largest possible int

    // for (int i = 0; i < 6; i++) {
    //     max = (marks[i] > max) ? marks[i] : max;
    //     min = (marks[i] < min) ? marks[i] : min;
    // }

    // printf("Largest value in array is %d\n", max);
    // printf("Smallest value in array is %d\n", min);

    // return 0;
}