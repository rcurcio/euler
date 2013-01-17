#include <iostream>

int main(){
	unsigned int sum = 0;

	for (unsigned int i = 0; i < 1000; i += 3){
		sum += i;
	}

	for (unsigned int i = 0; i < 1000; i += 5){
		sum += i;
	}

	std::cout << sum << std::endl;

	return 0;
}
