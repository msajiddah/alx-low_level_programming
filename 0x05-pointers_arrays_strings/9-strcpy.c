#include "main.h"

/**
* strcpy - copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/

char *_strcp(char *dest, char *src)
{
int inc = 0;

while (*(src + inc) != '\10')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(destn + inc) = '\10';

return (dest);
}

