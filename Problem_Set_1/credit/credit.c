#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CardType();

int main()
{
    char cc[19];
    char type[20] = "Invalid";
    int cc_number = 0;
    int total = 0;
    
    printf("Enter your credit card number: \n");
    scanf("%19s", cc);
    //printf("%s \n", cc);
    
    if (cc[0] == 51)
    {
        if (cc[1] == 52 || cc[1] == 55)
        {
            strcpy(type, "American Express");
            printf("%s \n", type);
        }
    }
    else if (cc[0] == 52)
    {
        strcpy(type, "Visa");
        printf("%s \n", type);
    }
    else if (cc[0] == 53)
    {
        if (cc[1] > 48 && cc[1] < 54)
        {
            strcpy(type, "MasterCard");
            printf("%s \n", type);
        }
    }
    
    //checks to see if the credit card type matches initial numbers. If not, aborts before running any calculations
    CardType(type);
    size_t length = strlen(cc);
    
    //removes any special characters from the cc number entree

    for(int i=0; i<strlen(cc); i++)
    {
        if (cc[i] < 48 || cc[i] > 57)
        {
            for(int k=i; k<strlen(cc);k++)
            {
                cc[k] = cc[k+1];
            }
            i = i - 1;
        }
        else if (cc[i] > 47 || cc[i] < 58)
        {
            cc_number++;
        }
    }

    //Initializes counter variables to track cc number array position
    int counter1 = cc_number;
    int counter2 = 0;

    while(counter1 > 1)
    {
        printf("%d\n", cc[cc_number-((2*counter2)+2)]-'0');
        if(((cc[cc_number-((2*counter2)+2)])-'0') < 5)
        {
            total = total + (2*((cc[cc_number-((2*counter2)+2)])-'0'));
        }
        else 
        {
            total = total + 1 + ((2*((cc[cc_number-((2*counter2)+2)])-'0')) % 10);
        }
        printf("%d \n", total);
        counter1 = counter1 -2;
        counter2 =  counter2 +1;
    }
    
    //resets counter variables rather than generating new ones
    counter1 = cc_number;
    counter2 = 0;

    while(counter1 > 1 || counter1 == 1)
    {
        total = total + ((cc[cc_number-((2*counter2)+1)])-'0');
        counter1 = counter1 -2;
        counter2 =  counter2 +1;
    }

    //Checks to make sure all conditios match the CC type, length of CC number and checksum is correct

    if((total%10)== 0)
    {
        printf("this ran \n");
        if (strcmp(type, "American Express") == 0 && cc_number == 15)
        {
            printf("This is a valid card: %s\n", type);       
        }
        else if (strcmp(type, "MasterCard") == 0 && cc_number == 16)
        {
            printf("This is a valid card: %s\n", type);       
        }
        else if (strcmp(type, "Visa") == 0)
        {
            if(cc_number > 12 && cc_number < 17)
            {
                printf("This is a valid card: %s\n", type);
            }
        }
    }
    else
        {
            printf("Card number is Invalid");
        }
    
}

void CardType(char thisis[])
{
    if (strcmp(thisis, "Invalid") == 0) 
    {
        printf("Not a Valid CC number. \n");
        exit(0);
    }
}