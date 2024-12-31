#include <stdio.h>
int calc(int);
int main() {
    int n=0;
    printf("Enter a number for sum of first n even numbers : ");
    scanf("%d",&n);

    calc(n);
    return 0;
}

int calc(int a) {
    int sum=0;
    for(int i = 0; i<=a ; i++){
        sum+=2*i;
    }
    printf("The sum of first %d even numbers is %d \n ",a,sum);
    return 0;
}
