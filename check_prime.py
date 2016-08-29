#!/usr/bin/python3
# AKS algorithm implementation
def check_prime(x):
	if(x == 1): return False
	if(x == 2): return True
	if(x == 3): return True
	if(x%2 == 0): return False
	if(x%3 == 0): return False
	div=5
	diff=4
	while(div*div <= x):
		if(x % div == 0):
			return False
		div += diff
		diff = 6-diff
	return True
	
print("Number of queries? :")
q = int(input())
if(q>0):
	print("Start inputs")
	for i in range(q):
		x = int(input())
		if(check_prime(x)):
			print("Prime")
		else:
			print("Not Prime")
else:
	print("It happens sometimes, you will be fine")