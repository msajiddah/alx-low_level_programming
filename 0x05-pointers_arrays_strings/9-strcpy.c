#include "main.h"

/**
* strcpy - copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/

char *_strcpy(char *dest, char *src) 
{
int inc = 0;

while (*(src + inc) != '\10')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\10';

return (dest);
}
