#include <stdio.h>
main(){
    char str1[100];

    printf("Enter your full name: ");
    scanf("%s", str1);                      // The scanf() function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).

    printf("Your name is %s\n", str1);

}




#include <stdio.h>
main(){
    char str2[100];

    printf("Enter your full name: ");
    scanf("%[^\n]s", str2);                 // It takes input even after space.

    printf("Your full name is %s", str2);

}