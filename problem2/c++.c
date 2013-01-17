#include <iostream>

int main(){
	unsigned int num1 = 0,
		num2 = 1,
		sum = 0;

	for (;;){
		unsigned int num3 = num1 + num2;

		if (num3 % 2 == 0){
			sum += num3;
		}

		if (num3 >= 4000000){
			break;
		}

		num1 = num2;
		num2 = num3;
	}

	std::cout << sum << std::endl;

	return 0;
}
