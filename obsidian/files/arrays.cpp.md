```c++
#include <iostream>
#include <ostream>
#include <cmath>

int main() {

	int    luckyNums [] = {4, 8, 15, 16, 23, 42};

	std::cout << luckyNums[0] << std::endl;
	luckyNums[0] = 0;
	std::cout << luckyNums[0] << std::endl;

	return 0;

}
```