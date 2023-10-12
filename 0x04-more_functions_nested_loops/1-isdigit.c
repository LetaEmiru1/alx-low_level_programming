#include "main.h"
/**
  *_isdigit checks for digits from 0 to 9
  * return 1 if c is digit while is c is the function argument.
  */

int _isdigit (int c)
{
	if (c>= 0 && c<=9)
	{
		return 1;
	}
	else
		return 0;
}
