#include <iostream>
#include <boost/scoped_ptr.hpp>

int main(int argc, char ** argv)
{
	boost::scoped_ptr<int>temp(new int);

	*temp = 1;

	std::cout << *temp << std::endl;


	*temp = 2;

	std::cout << *temp << std::endl;

	temp.reset(new int);


	return 0;

}
