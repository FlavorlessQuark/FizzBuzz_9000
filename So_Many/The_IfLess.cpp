# include <iostream>
# include <map>

int main(void)
{
	int next3;
	int next5;

	next3 = 3;
	next5 = 5;
	for (int i = 0; i <= 100; i++)
	{
		for (int n = 0; n < (i == (next3 += ((i == next3) * 3)) - 3); n++)
			std::cout << "Fizz" ;
		for (int n = 0; n < (i == (next5 += ((i == next5) * 5)) - 5); n++)
			std::cout << "Buzz" ;
		for (int n = 0; n < (((i != (next5 - 5)) + (i != (next3 - 3)))  == 2); n++)
			std::cout << i ;

		std::cout << std::endl;
	}
}
