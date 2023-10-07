#include "main.h"
/**
 * _strcat - cocatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_srtcat(char *dest, char *src)
{
  int i;
  int j;

  i = 0;
  while (dest[i] != '\0' )
  {
     i++;
  }	
  
  i = 0;
  while (src[i] != '\0'  )
  {
     dest[i] = src[i];
     i++;
     j++;
  
  }	 

  dest[i] = '\0';
  return (dest);
}
