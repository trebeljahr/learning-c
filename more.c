#include <stdio.h>
/*This is a comment*/
/*Comments can span
  multiple lines
  like this! */

/*These are ints*/
int hello, b, c = 1;

/* hello, b and c are identifiers */
/* int is the type and initialization statement */
/* the values of hello, b and c are the same -> ¹ */

const char *my_func(void)
{
	return "Hello world! \n";
}

int scopes(void)
{
	char block[] = "Hello there!";
	printf("Inside scope 1: ");
	printf("%s \n", block);
	{
		char block[] = "Something else!";
		printf("Inside scope 2: ");
		printf("%s \n", block);
	}
	printf("Inside scope 1 after scope 2: ");
	printf("%s \n", block);
}

/* In C there is a main function */
/* it takes void as argument and returns a type int */
int main(void)
{
	printf("%s", my_func());
	/* this is a 'block' */
	int i = 5;
	{
		/* this is also a 'block', nested inside the outer block */
		int i = 6;
	}

	scopes();
	return 0;
}
