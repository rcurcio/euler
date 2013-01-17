#include <iostream>

int main(){
	unsigned long num = 600851475143;
	unsigned long largest = 1;

	for (unsigned long i = 2; i <= num; i++){
		if (num % i == 0){
			largest = i;

			num = num / i;

			if (num == 1){
				break;
			}
		}
	}

	std::cout << largest << std::endl;

	return 0;
}
