// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words,
//	and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);

// #include <stdlib.h>

// // Check if character is a separator (space, tab, newline)
// int	is_sep(char c)
// {
// 	return (c == ' ' || c == '\t' || c == '\n');
// }
// char	**ft_split(char *str)
// {
// 	int		i = 0, j = 0, k;
// 	int		words = 0;
// 	char	**res;
// 	// -------- COUNT WORDS --------
// 	// Loop through string and count how many words exist
// 	while (str[i])
// 	{
// 		// Skip separators
// 		while (str[i] && is_sep(str[i]))
// 			i++;
// 		// If we find a word, increase count
// 		if (str[i])
// 			words++;
// 		// Skip the word
// 		while (str[i] && !is_sep(str[i]))
// 			i++;
// 	}
// 	// Allocate memory for array of strings (+1 for NULL at the end)
// 	res = malloc(sizeof(char *) * (words + 1));
// 	if (!res)
// 		return (NULL);
// 	i = 0;
// 	// -------- FILL ARRAY --------
// 	while (str[i])
// 	{
// 		// Skip separators
// 		while (str[i] && is_sep(str[i]))
// 			i++;
// 		if (str[i])
// 		{
// 			k = 0;
// 			int start = i;
// 			// Find end of word
// 			while (str[i] && !is_sep(str[i]))
// 				i++;
// 			// Allocate memory for the word (+1 for '\0')
// 			res[j] = malloc(i - start + 1);
// 			// Copy characters into new string
// 			while (start < i)
// 				res[j][k++] = str[start++];
// 			// Null-terminate the word
// 			res[j][k] = '\0';
// 			j++; // Move to next word
// 		}
// 	}
// 	// End array with NULL
// 	res[j] = NULL;
// 	return (res);
// }

#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		a;
	int		word;
	int		start;
	char	**fin;
	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i])
			word++;
		while (str[i] && !is_sep(str[i]))
			i++;
	}
	fin = malloc(sizeof(char *) * (word + 1));
	if (!fin)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i])
		{
			start = i;
			a = 0;
			while (str[i] && !is_sep(str[i]))
				i++;
			fin[j] = malloc(sizeof(char) * (i - start + 1));
			if (!fin[j])
				return (NULL);
			while (start < i)
				fin[j][a++] = str[start++];
			}
			fin[j][a] = '\0';
			j++;
		}
	fin[j] = NULL;
	return (fin);
}
