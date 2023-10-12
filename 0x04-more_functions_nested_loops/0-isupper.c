#include "main.h"
/**
  *main- checks for an uppercase charcter
  *Return- 1 if affarmative 0 otherwise
  */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return 1;
	}
	return 0;
}
