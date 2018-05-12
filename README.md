# prime_rib

Massively distributed prime number generator.

This project is a playground for:

* programming languages comparison
* system deployment
* network security
* project management
* mathematics, of course

In case you did not remember, a prime number is a number that
 is only divisible by 1 and itself.


## Small numbers Brute Force approach

The simplest algorithm to find if a number N is prime is to check all
 numbers from 2 to N-1, if the remainder of the division is 0, then we
  have a divider and N is _not_ a prime.

There are several simple considerations we can take into account and have
 significant increase in performance.
 
* We do not need to check every number, we can skip all the even numbers
 and check if N is divisible by 2.
* Same applies to all the non-prime numbers, we can eliminate all of them.
* We do not have to check the numbers all the way to N-1, we only need to
 test up to square root of N.

So, this brute force algorithm is pretty straight-forward. To find if
 N is a prime number:
 

```
	Loop: Iterate from 2 to sqrt(N) :  
	  Step 1: Take next prime number :  
	  Step 2: Check if it divides N. :  
	  Step 3: If it does not divides N, save it :  
	Repeat :  
```


## Small numbers Eratosthenes Sieve approach


*coming soon*

## Using multithreading to make things faster

*coming soon*

## Using cluster of computers to make things faster

*coming soon*

## File format specification

*coming soon*

## Web services api specification

*coming soon*

