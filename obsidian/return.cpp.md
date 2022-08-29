```c++

#include <iostream>
#include <ostream>

double cube (**double** num) {

	double result;
	result = num * num * num;

	return (result);
}

int main () {

	double answer;
	double num;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> num;
	answer =  cube(num);
	std::cout << "The cube of " << num << " is: " << answer << std::endl;

	return 0;
}
```