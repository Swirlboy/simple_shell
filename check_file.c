#include "shell.h"
/**
 * check_file - checks existence of file
 * @pathname: input path to the file
 * Return: 0 if the file exist or -1 if not
 */
int check_file(char *pathname)
{
	int exist_stat;

	exist_stat = (open(pathname, O_RDONLY));
	if (exist_stat != -1)
	{
		close(exist_stat);
		return (0);
	}
	else
		return (-1);
}
