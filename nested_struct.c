#include<stdio.h>
struct student {
    char name[20];
    int class;
    struct dob {
        int year;
        int month;
        int day;
    }d;
}s;
int main() {
    printf("Enter the name of the student :");
    scanf("%s",s.name);
    printf("Enter the class of the student :");
    scanf("%d",&s.class);
    printf("Enter the year of birth");
    scanf("%d",&s.d.year);
    printf("Enter the month of birth");
    scanf("%d",&s.d.month);
    printf("Enter the day of birth");
    scanf("%d",&s.d.day);

    printf("The name of the student is %s",s.name);
    printf("The class of the student is %d",s.class);
    printf("The date of birth of the student is %d-%d-%d",s.d.year,s.d.month,s.d.day);
return 0;
}
