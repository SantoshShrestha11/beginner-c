#include <stdio.h>
int main() {
    int i, j;
    char character;
    printf("Enter the character which you want to use to make the pattern: ");
    scanf("%c", &character);
    
    for (i = 5; i > 0; i--) { 
        for (j = 0; j < i; j++) {
            printf("%c", character);
        }
        printf("\n"); 
    }
    
    return 0;
}
