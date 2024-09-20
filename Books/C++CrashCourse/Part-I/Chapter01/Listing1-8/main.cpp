//Listing 1-8: A program that prints the results of applying step_function to several integers 
//f(x) = {-1 if x < 0; 0 if x == 0; 1 if x > 0;}
//Type of f(x) is integer, and type of x is integer too
//An alias to f(x) for the compiler, is step_function

#include <cstdio>

int step_function(int x)
{
	int result = 0;
	if (x < 0)
	{
		result = -1;
	}
	else if (x > 0)
	{
		result = 1;
	}
	return result;

}

int main()
{
	int num1 = 42;
	int result1 = step_function(num1);


	int num2 = 0;
	int result2 = step_function(num2);
	

	int num3 = -32767;
	int result3 = step_function(num3);

	printf("Num1: %d, Step: %d\n", num1, result1);
	printf("Num2: %d, Step: %d\n", num2, result2);
	printf("Num3: %d, Step: %d\n", num3, result3);

	return 0;

}
