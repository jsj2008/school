#include <iostream>
	
int main()
{
	long int x = 1;
	int i = 1;
	while (x > 0) 
	{
		std::cout << x << " " << i << std::endl;
		x *= 2;
		i += 1;
	}
}		
