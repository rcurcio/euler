#!/usr/bin/env python

num = 600851475143
largest = 1

for i in xrange(2, num):
	if num % i == 0:
		largest = i

		num = num / i

		if num == 1:
			break

print largest
