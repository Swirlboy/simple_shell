#include "shell.h"
/**
 * _getenv - Content of a global variable
 * @global_var: input variable to extract from environment
 * Return: Pointer to the content of a variable, or NULL if fails
 */
char *_getenv(char *global_var)
{
	int j = 0;
	const char cutter[] = "=";
	char *env_tok, *envdup, *env_tok_dup;

	if (global_var != NULL)
	{
		if (environ == NULL)
			return (NULL);
		envdup = _strdup(environ[j]);
		while (envdup != NULL)
		{
			env_tok = strtok(envdup, cutter);
			if (_strcmp(env_tok, global_var) == 0)
			{
				env_tok = strtok(NULL, cutter);
				/**printf("%s\n", token);*/
				env_tok_dup = _strdup(env_tok);
				free(envdup);
				return (env_tok_dup);
			}
			j++;
			free(envdup);
			envdup = _strdup(environ[j]);
		}
	}
	return (NULL);
}
