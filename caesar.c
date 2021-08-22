#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 

int key, afterkey, afterkey2, x;
char beforekey, final, capitalize, capitalfinal, lowercasefinal;
string plaintext;
char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(int argc, string argv[])
{   
    x = (atoi(argv[1]));
    if (atoi(argv[1]) < 0)
    {
        printf("Positive Numbers Only\n");
    }
    
    if (x >= 0)
    {
        key = (atoi(argv[1]));
        printf("Key: %i\n", key);
        plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if (isalpha(plaintext[i]))
            {
                if (isupper(plaintext[i]))
                {
                    beforekey = plaintext[i];
                    afterkey = ((plaintext[i] - 'A') + key);
                    final = alphabet[afterkey];
                    printf("%c", final);
                }
                if (islower(plaintext[i]))
                {
                    capitalize = toupper(plaintext[i]);
                    afterkey2 = ((capitalize - 'A') + key);
                    capitalfinal = alphabet[afterkey2];
                    lowercasefinal = tolower(capitalfinal);
                    printf("%c", lowercasefinal);
                }
            }
            else 
            {
                printf("%c", plaintext[i]);
            }
        }
    }
    
    else if (isalpha(argv[1]))
    {
        printf("Usage: ./caesar key");
    }
    
}
