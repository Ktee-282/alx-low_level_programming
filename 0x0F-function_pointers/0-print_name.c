#include "main.h"
/**
  * print_name - prints a name
  * @name: input string
  * @f: function pointer casted to char pointer
  *
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
