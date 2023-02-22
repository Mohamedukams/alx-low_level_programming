#include "main.h"

/**
 * main - function that prints alphabets
 * print_alphabet - function that prints alphabets
 * Return: Always (0)
 */

int main(void)
{
	void print_alphabet(void)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			printf("%d", i);
		}

		return (0);
	}
}
