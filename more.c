/* include imports libraries and exposes 
the functions within those to the current context */
#include <stdio.h>

/* define is a preprocessor -> the compiler will replace every 
instance if THIS_IS_FUN with 25. This btw. is everything but fun 
and usually the same effect can be achieved by using const*/
#define THIS_IS_FUN 25
const int use_me_instead = 25;

/*This is a comment*/
/*Comments can span
  multiple lines
  like this! */

/*These are ints*/
int hello,
	b, c = 1;

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

double larger_precision = 2.903258042352439572043958732049583;
float lesser_precision = 2.38983427932874234;

/* sizeof(short) <= sizeof(int) <= sizeof(long) */
int normal_integer = 1;
long int longer_integer = 2;
short int shorter_integer = 2;
/*this is an unsigned number - it can not have a negative sign*/
unsigned short int short_positive_integer = 2;

/* In C there is a main function */
/* it takes void as argument and returns a type int */
int main(void)
{
	printf("This is the preprocessed value: %d \n", THIS_IS_FUN);
	printf("This is the const value: %d \n", use_me_instead);
	printf("%s", my_func());

	int integer_two = 2;
	float float_two = 2;
	double double_two = 2;
	long double long_double_two = 2;
	short int short_two = 2;
	long int long_two = 2;
	unsigned int unsigned_two = 2;
	unsigned short int unsigned_short_two = 2;
	unsigned long int unsigned_long_two = 2;
	/*
	short float 
	short double 
	long float 
	-> do not exist, short double -> float, long float -> double
	also unsigned combinations of floats and doubles do not exist. 
	short and long are so called data modifiers. 
	and the sizeof operator gives back the number of bits needed 
	to implement the datatype.
	*/
	printf("Size Of Int: %lu \n", sizeof integer_two);
	printf("Size Of Short Int: %lu \n", sizeof short_two);
	printf("Size Of Long Int: %lu \n", sizeof long_two);
	printf("Size Of Float: %lu \n", sizeof float_two);
	printf("Size Of Double: %lu \n", sizeof double_two);
	printf("Size Of Long Double: %lu \n", sizeof long_double_two);
	printf("Size Of Unsigned Int: %lu \n", sizeof unsigned_two);
	printf("Size Of Unsigned Short Int: %lu \n", sizeof unsigned_short_two);
	printf("Size Of Unsinged Long Int: %lu \n", sizeof unsigned_long_two);

	/* Const declarations can not be altered and have to be init. */
	const int this_shall_not_change = 5;

	/* this is a 'block' */
	int i = 5;
	{
		/* this is also a 'block', nested inside the outer block */
		int i = 6;
	}

	scopes();
	return 0;
}
