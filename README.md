# problemset2


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float count_letters(string sample);
float count_words(string sample);
float count_sentences(string sample);
char space = ' ';

// index = 0.0588 * L - 0.296 * S - 15.8
int main(void)
{
    string text = get_string("Text: ");
    float letter_count = count_letters(text);
    float word_count = count_words(text);
    float sentence_count = count_sentences(text);
    float L = (letter_count / word_count) * 100;
    float S = (sentence_count / word_count) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade_level = round(index);
    if (grade_level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade_level >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade_level);
    }
}


float count_letters(string sample)
{
    float num_ofletters = 0;
    for (int i = 0.0; i < strlen(sample); i++)
    {
        if (isalpha(sample[i]))
        {
            num_ofletters++;
        }
    }
    return num_ofletters++;
}

float count_words(string sample)
{
    float num_ofwords = 0;
    for (int i = 0.0; i < strlen(sample); i++)
    {
        if (sample[i] == space)
        {
            num_ofwords++;
        }
    }
    return num_ofwords + 1;
}

float count_sentences(string sample)
{
    float num_ofsentences = 0;
    for (int i = 0; i < strlen(sample); i++)
    {
        if ((sample[i] == '.') || (sample[i] == '?') || (sample[i] == '!'))
        {
            num_ofsentences++;
        }
    }
    return num_ofsentences;
}
