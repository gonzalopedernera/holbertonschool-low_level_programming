#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long int longType;
long long int longlongType;
char charType;

printf("Size of a char: %zu bytes\n", sizeof(charType));
printf("Size of a int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longType));
printf("Size of a long long int: %zu bytes\n", sizeof(longlongType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));

return (0);
}
