#include <stdio.h>
#include <string.h>

void CardType();

int main()
{
    char cc[19];
    char type[20] = "Invalid";
    int visa;
    int mastercard;
    int amex;
    
    printf("Enter your credit card number: \n");
    scanf("%19s", cc);
    //printf("%s \n", cc);
    
    if (cc[0] == 51)
    {
        if (cc[1] == 52 || cc[1] == 55)
        {
            strcpy(type, "American Express");
            //printf("%s \n", type);
        }
    }
    else if (cc[0] == 52)
    {
        strcpy(type, "Visa");
        //printf("%s \n", type);
    }
    else if (cc[0] == 53)
    {
        if (cc[1] > 48 && cc[1] < 53)
        {
            strcpy(type, "MasterCard");
            //printf("%s \n", type);
        }
    }
    CardType(type);
    printf("%S \n", type);
    size_t length = strlen(cc);
    printf("The length of the string is: %zu\n", length);

    for(int i=0; i<strlen(cc); i++)
    {
        if (cc[i] < 48 || cc[i] > 57)
        {
            for(int k=i; k< (strlen(cc)-1);k++)
            {
                cc[k] = cc[k+1];
            }
            //printf("%s \n", cc);
        }
    }



}

void CardType(char thisis[])
{
    if (strcmp(thisis, "Invalid") == 0) 
    {
        printf("Not a Valid CC number. \n");
        void abort(void);
    }
}