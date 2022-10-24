/**
 * _strcpy - function that copies the strinf pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by the dest
 *
 * @dest: apointer to the destination of the string
 * @src: a pointer to the source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (aux);
}
