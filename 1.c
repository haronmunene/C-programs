#include <stdio.h>
/**
 * main - A C program that prints size of various types in a computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("size of a char: %ld\n", sizeof(char));
	printf("size of a int: %ld\n", sizeof(int));
	printf("size of a long int: %ld\n", sizeof(long int));
	printf("size of a long long int: %ld\n", sizeof(long long int));
	printf("size of a float: %ld\n", sizeof(float));

    return (0);	
}