#include <stdio.h>

int main() {
    int n;
printf("Enter number of elements"); // In c we cannot intiallize an array without putting size in it . like here marks[n]
scanf("%d" , &n);
int marks[n];
for(int i =0 ; i<n;i++){
    int j;
    printf("Enter an element");
    scanf("%d" , &j);
    marks[i] = j;
}

for(int i =0 ; i<n ; i++){
    printf("%d\n" , marks[i]);
}
}