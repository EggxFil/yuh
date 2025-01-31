#include <iostream>

struct stupid
{


	stupid()
	{
		std::cout << "your stupid" << '\n';
		std::cout << "you're*" << std::endl;
	}
};
int main()
{
	stupid hello;

	return 0;
}