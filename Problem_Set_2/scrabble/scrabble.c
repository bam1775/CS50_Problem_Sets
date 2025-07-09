#include <stdio.h>
#include <string.h>

int main() {
    
    char ScrabbleTest = 'k';
    int value_char = 0;
    
    switch (ScrabbleTest) {
        case 'A':
        case 'a':
            value_char = 1;
            break;
        case 'B':
        case 'b':
            value_char = 3;
            break;
        case '1':
            printf("You entered the digit 1.\n");
            break;
        default:
            printf("You entered something else.\n");
            break;
    }
    
}