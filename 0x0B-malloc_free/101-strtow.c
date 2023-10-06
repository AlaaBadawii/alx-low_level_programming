#include "main.h"
#include <string.h>
/**
 * strtow - function that splits a string into words.
 * @str: char pointer
 * Return: ptr
 */
char **strtow(char *str)
{
	int i, j, num_words, word_len, index;
	char **words, *token;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	num_words = 0;
	word_len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			word_len++;
		if ((str[i + 1] == ' ' || str[i + 1] == '\0') && word_len > 0)
		{
			num_words++;
			word_len = 0;
		}
	}
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		free(words);
	index = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
		words[index] = malloc(sizeof(char) * (strlen(token) + 1));
		if (words[index] == NULL)
		{
			for (j = 0; j < index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		strcpy(words[index], token);
		token = strtok(NULL, " ");
		index++;
	}
	words[index] = NULL;

	return (words);
}
