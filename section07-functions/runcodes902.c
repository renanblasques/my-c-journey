#include <stdio.h>

int string_length(char word[]);
int is_palindrome(char word[]);
int count_vowels(char word[]);
int count_consonants(char word[]);
void to_uppercase(char word[], char result[]);
void inverter(char word[], char inverted[]);

int main()
{
    char word[101], invertedWord[101], uppercaseWord[101];
    scanf("%s", word);

    printf("Palindromo: ");
    if (is_palindrome(word))
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }

    printf("Vogais: %d | Consoantes: %d\n", 
        count_vowels(word), count_consonants(word));

    to_uppercase(word, uppercaseWord);
    printf("Maiuscula: %s\n", uppercaseWord);

    inverter(word, invertedWord);
    printf("Invertida: %s\n", invertedWord);

    return 0;
}

int string_length(char word[])
{
    int i = 0;
    for (i = 0; word[i] != '\0'; i++);
    return i;
}

void inverter(char word[], char inverted[])
{
    int length = string_length(word);
    for (int i = 0; i < length; i++)
    {
        inverted[i] = word[(length - i - 1)];
    }
    inverted[length] = '\0';
}

int is_palindrome(char word[])
{
    int length = string_length(word);
    char uppercaseWord[length];
    uppercaseWord[length] = '\0';
    to_uppercase(word, uppercaseWord);
    int match = 1;
    for (int i = 0; i < length; i++)
    {
        int j = length - i - 1;
        if (uppercaseWord[i] != uppercaseWord[j])
        {
            match = 0;
        }
    }

    return match;
}


void to_uppercase(char word[], char result[])
{
    int length = string_length(word);    
    for (int i = 0; i < length; i++)
    {
        if ((word[i] >= 97) && (word[i] <= 122))
        {
            result[i] = word[i] - 32;
        }
        else
        {
            result[i] = word[i];
        }
    }
    result[length] = '\0';
}

int count_vowels(char word[])
{
    int length = string_length(word), count = 0;
    char uppercaseWord[length];
    to_uppercase(word, uppercaseWord);
    uppercaseWord[length] = '\0';

    for (int i = 0; i < length; i++)
    {
        switch (uppercaseWord[i])
        {
        case 65:
            count++;
            break;
        case 69:
            count++;
            break;
        case 73:
            count++;
            break;
        case 79:
            count++;
            break;
        case 85:
            count++;
            break;
        }
    }

    return count++;
}

int count_consonants(char word[])
{
    int length = string_length(word), count = 0;
    count = length - count_vowels(word);

    return count;
}