#include <stdio.h>


char* _getenv(char *var)
{
	extern char **environ;
	char *value;
	int i = 0;
	char *env;
	char *envvalue;

	envvalue = malloc(sizeof(char)* 1024);
	if (envvalue == NULL)
		return (NULL);

	env = malloc(sizeof(char) *1024);
	if (env == NULL)
		return (NULL);

	while (environ[i] != NULL)
	{
		strcpy(env, environ[i]);
		value = strtok(env, "=");
		if (strcmp(value, var) == 0)
		{
			strcpy(envvalue, strtok(NULL, "="));
			return (envvalue);
		}
		i++
			return (NUll);
	}
}
