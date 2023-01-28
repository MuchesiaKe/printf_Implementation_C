/**
*_strcpy - copies string pointed by src including '\0'
*@dest : buffer to copy sring into
*@src : string to be copied
*Return: the pointer to dest
*/

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while ((dest[i] = src[i]))
		i++;
	return (dest);
}
