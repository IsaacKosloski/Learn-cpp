//Listing 1-7: A program usign the step_function. (This program produces no output.)
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

int main()
{
	int value1 = step_function(100); //value1 is 1
	int value2 = step_function(0);   //value2 is 0
	int value3 = step_function(-10); //value3 is -1					 					
}
