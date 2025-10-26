#include<stdio.h>
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    for(int str = 0; str < n; str++){
        for(int end = str; end < n; end++){
            for(int i = str; i <= end; i++){
                printf("%d", arr[i]);
            }
            printf(" ");
        }
        printf("\n"); // 👈 new line after each start index
    }
    printf("These are the subarrays ");
}
int arrays {
    int main(){
        
    }
}