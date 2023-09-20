#include "main.h"\
#include <stdio.h> 
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n. If n does not have a natural square root, -1 is returned.
 */
int _sqrt_recursion(int n)
{
return _sqrt_helper(n, 1, n);
}

/**
 * _sqrt_helper - Helper function for calculating the square root using binary search.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return: The square root of n. If n does not have a natural square root, -1 is returned.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;

if (mid * mid == n)
return mid;

if (mid * mid < n)
{
if (mid + 1 <= end)
return _sqrt_helper(n, mid + 1, end);
else
return -1;
}
else
{
if (start <= mid - 1)
return _sqrt_helper(n, start, mid - 1);
else
return -1 

return -1 ; } }
