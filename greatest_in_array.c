#include<stdio.h>
int large(int[], int);
int main() {
    int nums[] = {20,40,30,45,15};
    int length = sizeof(nums)/sizeof(nums[0]);
    large(nums,length);
    return 0;
}

int large(int nums[], int length) {
    int greatest = nums[0];
    for(int i = 1; i<length; i++) {
        if (greatest<nums[i]) {
            greatest = nums[i];
        }
    }
    printf("The greatest number in array is %d.\n",greatest);
    return 0;
}
