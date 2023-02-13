#include <iostream>
#include <string>

int main() {
	std::string s1 = "This is the house that Jack built.";

	std::cout << "Original: " << s1 << std::endl;

	std::cout << "Substr(0,4): " << s1.substr(0,4) << std::endl;

	std::cout << "Substr(5,2): " << s1.substr(5,2) << std::endl;

	std::cout << "Find(\"This\"): " << s1.find("This") << std::endl;

	std::cout << "Find('J'): " <<  s1.find('J') << std::endl;

	std::cout << "Find(\"is\"): " <<  s1.find("is", 4) << std::endl;

	std::cout << "Length: " <<  s1.length() << std::endl;

	std::cout << "Erase(0,5): " <<  s1.erase(0,5) << std::endl;

	std::cout << "Length: " <<  s1.length() << std::endl;
}
