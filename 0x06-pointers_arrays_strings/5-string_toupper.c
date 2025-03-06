#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
    int i = 0;

    // Capitalize the first character if it is a lowercase letter
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -= 32;
    }

    // Traverse the string and capitalize characters after separators
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
            str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
            str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
            str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
            str[i - 1] == '}')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
    }

    return str;
}
