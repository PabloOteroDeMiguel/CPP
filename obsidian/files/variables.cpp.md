```c++
#include <iostream>
#include <ostream>
#include <string>

int main () {

	std::string characterName = "Robot";
	int** characterAge = 1227;

	std::cout << "There once was a robot called " << characterName << std::endl;
	std::cout << "He was " << characterAge << " years old" << std::endl; 
	std::cout << "He liked the name " << characterName << std::endl;
	std::cout << "But he doesn´t care being " << characterAge << " because he was a robot" << std::endl;

	return 0;
}
```