#!/usr/bin/env node

var num = 600851475143;
var largest = 1;

for (var i = 2; i <= num; i++){
	if (num % i === 0){
		largest = i;

		num = num / i;

		if (num === 1){
			break;
		}
	}
}

console.log(largest);
