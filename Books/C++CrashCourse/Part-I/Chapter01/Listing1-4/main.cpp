//Listing 1-4: A program with conditional behavior

#include <cstdio>

int main()
{
	int x = 0;
	if (x > 0) printf("Positive.");
	else if (x < 0) printf("Negative.");
	else printf("Zero.");
}
