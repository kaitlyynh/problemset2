
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main(int argc, string argv[])
{
    string key = argv[1];
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]) == false)
        {
            printf("%c", plaintext[i]);
        }
        if (isupper(plaintext[i]))
        {
            int offset1 = (plaintext[i] - 'A');
            char set = key[offset1];
            printf("%c", set);
        }
        if (islower(plaintext[i]))
        {
            char uppercase = toupper(plaintext[i]);
            int offset2 = (uppercase - 'A');
            char set2 = key[offset2];
            char final_set2 = tolower(set2);
            printf("%c", final_set2);
        }
        
    }
    
}
