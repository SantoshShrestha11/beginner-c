#include <stdio.h>
int main() {
    int a,b,result=0;
    char operator;
    printf("Enter the two numbers to perform the operation\n");
    scanf("%i %i",&a,&b);

    printf("Enter the operator \n");
    scanf(" %c",&operator);
    
    switch(operator) {
        case('*'):
        result = a*b;
        break;
        case('+'):
        result = a+b;
        break;
        case('-'):
        result = a - b;
        break;
        case'%':
        result = a%b;
        break;
          case('/'):
        if (b!=0){
        result = a/b;
        }else {
            printf("You got the zero error !!!");
            return 1;
        } 
        break;
        default:
        printf("invalid operator selected");
        return 1;
    }
printf("The result is %i\n=",result);
return 0;
}