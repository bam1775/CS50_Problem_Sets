#include <stdio.h>
#include <string.h>


int main() {

    int rows = 0;
    do 
    {
        printf("What height would you like your pyramid to be (1-8)?: ");
        scanf("%d", &rows);
    }
    while (rows < 1 || rows > 8);

    int num_chars = rows * 2 +2;
    int mid = num_chars/2;
    char bricks[num_chars];
    
    for(int j; j < num_chars;j++)
    {
        bricks[j] = ' ';
    }
    
    for (int i = 0; i < rows; i++)
    {
        bricks[mid-(2+i)] = '#';
        bricks[mid + (i+1)] = '#';
        //printf("%s s\n", bricks);
        printf("%s \n", bricks);
    }
    
}