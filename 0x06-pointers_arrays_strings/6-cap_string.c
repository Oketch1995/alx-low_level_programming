#include "main.h"

/**
 * cap_string - capitalize th first character of the word
 * @str: function to be capitalised
 * Return: Return the capitalised string
 */
char *cap_string(char *str)
{
	int byt = 0;

	while (str[++byt])
	{
		(!(str[byt] >= 'a' && str[byt] <= 'z'))
			byt++;
		if (str[byt - 1] == ' ' ||
				str[byt - 1] == '\t' ||
				str[byt - 1] == '\n' ||
				str[byt - 1] == ',' ||
				str[byt - 1] == ';' ||
				str[byt - 1] == '.' ||
				str[byt - 1] == '!' ||
				str[byt - 1] == '?' ||
				str[byt - 1] == '"' ||
				str[byt - 1] == '(' ||
				str[byt - 1] == ')' ||
				str[byt - 1] == '{' ||
				str[byt - 1] == '}')
			str[byt] -= 32;
	}
	return (str);
}


