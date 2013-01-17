#!/usr/bin/env node

var num1 = 0;
var num2 = 1;

var sum = 0;

while (true){
	var num3 = num1 + num2;

	if (num3 % 2 === 0){
		sum += num3;
	}

	if (num3 >= 4000000){
		break;
	}

	num1 = num2;
	num2 = num3;
}

console.log(sum);
