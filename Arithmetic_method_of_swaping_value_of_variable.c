#include <stdio.h>
void swap(int *,int *);
int main() {
    int val1=0, val2=0;

    printf("Enter the first variable :");
    scanf("%d",&val1);

    printf("Enter the second variable :");
    scanf("%d", &val2);

    printf("The variables before swapping are:\nfirst variable = %d\nsecond variable = %d\n",val1,val2);

    swap(&val1,&val2);


    printf("The original variables after swap function is called are:\nfirst variable = %d\nsecond variable = %d\n",val1,val2);
    return 0;
}
// Call by reference method is used so there are changes is original values
void swap(int *val1, int *val2) {   
    *val1 += *val2;
    *val2 = *val1-*val2;
    *val1 -= *val2;

    printf("The variables after swapping are:\nfirst variable = %d\nsecond variable = %d\n",*val1,*val2);
}
