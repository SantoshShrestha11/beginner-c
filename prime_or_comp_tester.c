#include <stdio.h>
int test(int num);
int main() {
    int num=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    test(num);
    return 0;
}

int test(int num) {
    if(num%2==0) {
        printf("The number %d is composite number\n",num);
    }else {printf("The number %d is prime number\n",num);
    }
    return 0;
}
