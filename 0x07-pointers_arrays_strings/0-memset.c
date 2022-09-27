#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        _putchar(" ");
                }
                if (!(i % 10) && i)
                {
                        _putchar("\n");
                }
                _putchar("0x%02x", buffer[i]);
                i++;
        }
        _putchar("\n");
}

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    memset(buffer, 0x01, 95);
    simple_print_buffer(buffer, 98);

    return (0);
}