#include "main.h"                                                                                   /**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return _is_prime_helper(n, 2);
}

/**
 * _is_prime_helper - Helper function for checking primality using recursion.
 * @n: The number to be checked.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int _is_prime_helper(int n, int divisor)
{
if (n < 2)
return 0;

if (divisor == n)
return 1;

if (n % divisor == 0)
return 0;

return _is_prime_helper(n, divisor + 1);\
}
