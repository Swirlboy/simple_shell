#include "shell.h"
/**
 * free_mem - Free the memory for the last execution
 * @entry: Input first entry
 */
void free_mem(char *entry)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(entry);
	}
	if (!isatty(STDIN_FILENO))
		free(entry);
}
