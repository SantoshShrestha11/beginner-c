#include <stdio.h>
int main() {
    float units,charge;
    printf("Enter the units consumed by the customer-\n");
    scanf("%f",&units);
    if (units<=100) {
        charge =1.50*units;
    }
    else if (units<=200) {
        charge =2.50*(units-100);
    }
    else if (units<500){
        charge =3.50*(units-300);
    }
    else if (units>500) {
        charge =5.50*(units-500);
    }
    printf("The charge is $%.2f\n",charge);
    return 0;
}