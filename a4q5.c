#include <stdio.h>
void printing_char (char ch, int numberOfChars);

int main (void)
{
    char numberofChar;
    int times;
    printf ("enter a character, and number of lines:\n");
    while ((scanf ("%c%d", &userChar)) == 2)
    {
        printing_char (userChar, lines);
    }
    return 0;
}

void printing_char (char ch, int numberOfChar)
{
    int x;
    int y = 0;

    while (++y <= numberOfchars)
    {
            for (x = 0; x<numberOfChars; x++)
            {
                printf ("%c", ch);
            }
            printf ("\n");
    }
}
