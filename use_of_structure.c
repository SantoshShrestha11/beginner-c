#include<stdio.h>
struct student
{
    char name[30];
    int roll;
    float fee;
};

int main() {
    struct student s[5];
    for (int i=0; i<5; i++) {
        printf("Enter the name of the student : \n");
        scanf("%s",s[i].name);
        printf("Enter the roll no of the studdent : \n");
        scanf("%d",&s[i].roll);
        printf("Enter the fee of the student : \n");
        scanf("%f",&s[i].fee);
    }

    printf("---------------------------------------------------------------------------------------------------------------------------\n");
    for (int i=0; i<5; i++) {
        printf("Name of the student : %s,\nRoll no of the student : %d,\nTotal fee of the student : %.2f\n",s[i].name,s[i].roll,s[i].fee);
        printf("--------------------------\n");
    }
    return 0;
}
