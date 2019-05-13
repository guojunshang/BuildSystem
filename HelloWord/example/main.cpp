#include"helloworld.h"
#include<string>
int main()
{
	std::string test_hello=cout_hello();
	std::string test_str="I am a test message.";
	std::cout<<test_str<<std::endl;
	std::cout<<test_hello<<std::endl;
	
	getchar();
	return 0;
}