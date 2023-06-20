#include "main.h"

/**
 * _isalpha - determines alphabetic char
 * @c: char to determine
 * Return: 1 if c is letter,always 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
