#include <stdio.h>
/**
 * main - ouputs nums from 00-99
 *
 * Return: 0 (successful)
 */

int main() 
{
    int i = 0;

    while (i < 100) {
        int j = i + 1;
        while (j < 100) {
            int x = i / 10;
            int y = i % 10;
            int z = j / 10;
            int w = j % 10;
            putchar(x + '0');
            putchar(y + '0');
            putchar(' ');
            putchar(z + '0');
            putchar(w + '0');

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }

    return 0;
}

