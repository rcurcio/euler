#!/usr/bin/env node

sum = 0

for (var i = 0; i < 1000; i += 3){
	sum += i;
}

for (var i = 0; i < 1000; i += 5){
	sum += i;
}

console.log(sum);
