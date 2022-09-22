#include ""main.h

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: pointer to receive copied string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int k, len;

len = 0;
wwhile (src[len] != '\0')
{
len++;
}

for (k = 0; k <= len; k++)
{
dest[k] = src[k];
}

return (dest);
}
