#include "main.h"
/**
*_isalpha - A function that checks for lowercase&uppercase char
*@c: is the char to be checked
*Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

