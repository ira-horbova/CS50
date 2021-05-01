#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string argument = argv[1];
        int counter = 0;
        int argumentsize = strlen(argument);
        for (int i = 0; i < argumentsize; i++)
        {
            if (isdigit(argument[i]))
            {
                counter++;  
            }
            else 
            {
                printf("Usage: ./caesar key\n");
                
                return 1;
            }
            
        }
        
        if (argumentsize == counter)
        {
            string plaintext = get_string("plaintext: ");
            int plaintextsize = strlen(plaintext);
            int key = atoi(argument);
            
            printf("ciphertext: ");
            
            for (int i = 0; i < plaintextsize; i++)
            {
                char letter = plaintext[i];
            
                if (isalpha(letter))
                {   
                    if (islower(letter))
                    {
                        printf("%c", (((letter - 'a') + key) % 26) + 'a');    
                    } 
                    else 
                    {
                        printf("%c", (((letter - 'A') + key) % 26) + 'A'); 
                    }
                } 
                else
                {
                    printf("%c", letter);
                }
            }
            
            printf("\n");
        }
        return 0;
        
    }
    else 
    {
        printf("Usage: ./caesar key\n");
        
        return 1;
    }
    
}
