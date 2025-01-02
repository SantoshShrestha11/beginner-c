/*Write a C program to find the area and volume of sphere and display the
results. Formulas are:-
Area = 4*PI*R*R Volume = 4/3*PI*R*R*R.
Note : Assume PI=3.14 and take the value of R from user*/
#include<stdio.h>
#define PI 3.14
int main() {
    float R,Area,Volume;
    printf("Enter the radius of the sphere\n=");
    scanf("%f",&R);
    Area =  4*PI*R*R;
    printf("The area of the sphere is %.2f\n",Area);
    Volume = 4/3.0*PI*R*R*R;
    printf("The volume of the sphere is %.2f\n",Volume);
    return 0;
}
