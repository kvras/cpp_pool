#include <iostream>

int main(){

	std::string str;
	std::string* stringPTR;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::string& stringREF = str;
	std::cout<< "STRING    : " << &str << "   |   "<< str << std::endl;
	std::cout<< "stringPTR : " << stringPTR << "   |   "<< *stringPTR << std::endl;
	std::cout<< "stringREF : " << &stringREF << "   |   "<< stringREF << std::endl;
	
}
