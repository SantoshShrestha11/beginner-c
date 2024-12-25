#include<string.h>
#include <stdio.h>
int main() {
    char str[100];
    char rev_str[100];
    int len = strlen(str);
    printf("Enter a string = ");
    fgets(str, sizeof(str), stdin); // fgets is safe then gets (learn about buffer size for gets)
    str[strcspn(str, "\n")] = '\0';

    strcpy(rev_str, str);
    strrev(rev_str);

    for(int i=0, i<len, i++){
        str[i] = rev_str[i];
        printf("The inputed string is palindrome");
    }
    else{
        printf("The inputed string is not palindrome");
    }
    return 0;
}
