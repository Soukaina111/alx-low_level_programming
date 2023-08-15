#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(void)
{
    char string[] = "_putchar";
    int length = sizeof(string) - 1;

    for (int i = 0; i < length; i++)
    {
        _putchar(string[i]);
    }

    _putchar('\n');

    return(0);
}
