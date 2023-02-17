#include "main.h"
/**
 * _isalpha - checks for alphanumeric character
 *
 * @c: character
 *
 * Return: 1 if alphanumeric, 0 if not
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
