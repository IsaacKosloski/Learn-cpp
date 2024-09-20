//Listing 1-6: A step function that returns -1 for negative values, 0 for zero, and 1 for positive values
//f(x) = {-1 if x < 0; 0 if x == 0; 1 if x > 0;}
//Type of f(x) is integer, and type of x is integer too
//An alias to f(x) for the compiler, is step_function
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
