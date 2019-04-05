#include <iostream>
#include <limits>
#include <cstdlib>

namespace sherifi
{
	class Data_convertion
	{
	private:
	protected:
	public:
		int x = 3;
		float y = 5.2;
		char z = x + y;
		unsigned short num = mumeric_limits <unsigned short> :: max();
		short num2 = num;
	};
}
int main()
{
	sherifi::Data_convertion data_1;
	std::cout << data_1.z << std::endl;
	sherifi::Data_convertion data_2;
	std::cout << data_2.num << std::endl;
	std::cout << data_2.num2 << std::endl;
	return 0;
}