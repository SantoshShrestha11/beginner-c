#include <stdio.h>
int fibonacci_recursive(int n);
int main()  {
    int n=0;
    printf("Enter the position (n) of the Fibonacci number to find: ");
    scanf("%d",&n);

    int result = fibonacci_recursive(n);
    printf("The %d th fibonacci number is :%d\n",n,result);


return 0;
}
int fibonacci_recursive(int n) {
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);

return 0;    
}
