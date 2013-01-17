#!/usr/bin/env python

multiples = []

for i in xrange(0, 1000, 3):
	multiples.append(i)

for i in xrange(0, 1000, 5):
	multiples.append(i)

print sum(multiples)
