#!/usr/bin/python3
def sieve(limit):
	a = [True]*limit
	a[0]=False
	a[1]=False
	for (i,isprime) in enumerate(a):
		if(isprime):
			yield i
			for n in range(i*i,limit,i):
				a[n]=False
# s=0
print("Enter the limit")
limit = int(input())
print("Primes upto ",limit,":")
for i in sieve(limit):
	print(i)
# print(s)