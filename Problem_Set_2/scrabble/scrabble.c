#include <stdio.h>
#include <string.h>

char letterScore(char letter);

int main() {
    
    char ScrabbleTest = 'l';
    int value_char = 0;

    printf("\n\n\nThe name of the game is scrabble, only with a twist. Two players will play against each other. The first player will enter a word. The second player will then enter a word, containing at least one letter from the previous players word. This will continue for 10 rounds. At the end of the game, the cumulative score for each player will be displayed and the highest will be crowned the winner.\n");

    for(int i=0; i<10; i++)
    {
    }

    value_char = letterScore(ScrabbleTest);
    printf("The value of the character is: %d\n", value_char);
    
}

char letterScore(char letter) {
  switch (letter) {
        case 'A':
        case 'a':
            return 1;
        case 'B':
        case 'b':
            return 3;
        case 'C':
        case 'c':
            return 3;
        case 'D':
        case 'd':
            return 2;
        case 'E':
        case 'e':
            return 1;
        case 'F':
        case 'f':
            return 4;
        case 'G':
        case 'g':
            return 2;
        case 'H':
        case 'h':
            return 4;
        case 'I':
        case 'i':
            return 1;
        case 'J':
        case 'j':
            return 8;
        case 'K':
        case 'k':
            return 5;
        case 'L':
        case 'l':
            return 1;
        case 'M':
        case 'm':
            return 3;
        case 'N':
        case 'n':
            return 1;
        case 'O':
        case 'o':
            return 1;
        case 'P':
        case 'p':
            return 3;
        case 'Q':
        case 'q':
            return 10;
        case 'R':
        case 'r':
            return 1;
        case 'S':
        case 's':
            return 1;
        case 'T':
        case 't':
            return 1;
        case 'U':
        case 'u':
            return 1;
        case 'V':
        case 'v':
            return 4;
        case 'W':
        case 'w':
            return 4;
        case 'X':
        case 'x':
            return 8;
        case 'Y':
        case 'y':
            return 4;
        case 'Z':
        case 'z':
            return 10;
    }
}