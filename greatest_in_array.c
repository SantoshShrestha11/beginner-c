#include<stdio.h>
int large(int[]);
int main() {
    int nums[] = {20,40,30,45,15};
    large(nums);
    return 0;
}

int large(int nums[]) {
    int greatest = nums[0];
    for(int i = 1; i<5; i++) {
        if (greatest<nums[i]) {
            greatest = nums[i];
        }
    }
    printf("The greatest number in array is %d.\n",greatest);
    return 0;
}
