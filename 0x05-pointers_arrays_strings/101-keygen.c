#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - Generates a random valid password
 * for the program 101-crackme.
 *
 * Return: 0 on success.
 */
int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        /* Generate a random character between 'A' and 'Z' */
        password[i] = 'A' + rand() % 26;
    }

    password[PASSWORD_LENGTH] = '\0'; /* Add null terminator */

    printf("Generated Password: %s\n", password);

    return 0;
}
