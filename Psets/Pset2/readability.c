#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main()
{
    //Getting user input
    string text = get_string("Text: ");
    
    //Calculate the average number of letters per 100 words 
    float L = ((float)count_letters(text) / count_words(text)) * 100;
    //Calculate the average number of sentences per 100 words
    float S = ((float)count_sentences(text) / count_words(text)) * 100;
    //Calculate text's grade
    int index = (int) round(0.0588 * L - 0.296 * S - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");
 
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}

int count_letters(string text)
{
    int textsize = strlen(text);
    int counter = 0;
    for (int i = 0; i < textsize; i++)
    {
        if (isalpha(text[i]))
        {
            counter++;
        }
    }
    return counter;
}

int count_words(string text)
{
    int textsize = strlen(text);
    int counter = 0;
    for (int i = 0; i < textsize; i++)
    {
        if (text[i] == ' ')
        {
            counter++;
        }


    }
    return counter + 1;
}

int count_sentences(string text)
{
    int textsize = strlen(text);
    int counter = 0;
    for (int i = 0; i < textsize; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            counter++;
        }
    }
    return counter;


}


