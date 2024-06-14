#include <iostream>

/*
	Marcos Pacheco gave an example of a function that uses boolean and returns if a number is odd or even.
	I did it in a simpler way: the function verifies if a number is odd or even and simply prints the result.
	My function is void, Pacheco's function was boolean and he needed to add more lines depending of the
	result.
*/

void OddOrEven(int n);

int main()
{
	int Num;

	std::cout << "Type an integer number to check if it is odd or even: ";
	std::cin >> Num;
	OddOrEven(Num);
}

void OddOrEven(int n)
{
	if (n % 2 == 0)
		std::cout << n << " is an even number.\n";
	else
		std::cout << n << " is an odd number.\n";
}
