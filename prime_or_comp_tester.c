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
    if(num<=1) {
        printf("The number %d is neither prime nor composite\n",num);
        return 0;

    }
    if(num==2){
        printf("The number %d is prime number\n",num);
        return 0;
    }
    if(num>1) {
        for(int i = 2;i*i<=num; i++){
            if(num%i==0) {
                printf("The number %d is a composite number\n",num);
                return 0;
            }
        }
    }
    printf("The number %d is a prime number\n",num);

    return 0;
}
