#include<stdio.h>
int main() {
float marks[10]={};
    for(int i = 0; i<10; i++) {
        printf("Enter the marks obtained by the student_%d = ",i+1);
        scanf("%f",&marks[i]);
    }
    printf("\nThe marks obtained are\n");
    for(int i = 0; i<10; i++) {
        printf("Student %d : %.2f\n",i+1, marks[i]);
    }

    float max = 0;
    for(int i = 0; i<10; i++) {
        if(marks[i]>max) {
            max = marks[i];
        }
    }
    printf("The highest mark obtained by the student is: %.2f\n",max);
return 0;
}