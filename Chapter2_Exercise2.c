/* EXERCISE 2 - Chapter 2 - solved and finished 25/7/2026 at roughly 6:00 PM BRT */

#include <stdio.h>
#define PI_2DP 3.14f /* Value of pi to two decimal places. */

int main (void) {
	float sphereVolume;
	int daRadius;

	daRadius = 10;
	sphereVolume = (4 / 3) * PI_2DP * daRadius * daRadius * daRadius;

	printf("The volume of a sphere with a radius of %d meters is roughly %.1f cubic meters.\n", daRadius, sphereVolume);

	return 0;
}

/* 	AUTHOR'S NOTES: */

/* 	
	When entering the fraction as 4.0f / 3.0f, the result - fixed to 1 decimal - is 4186.7. But when it's written as just 4 / 3, it's just 3140.0.
	I did the math and the result with the floating fraction is the actual one.

	Let A be some rational number:
	A * 3.14 * 10³ = 3140.0 
	A * 3.14 * 1000 = 3140.0
	A * 3140 = 3140.0
	A = 1
	1 != 4/3

	C is known for being picky about its data types, but I didn't know it was picky to the point where operations that had integers in them
	HAD to result in an integer - same thing for floats.
*/
