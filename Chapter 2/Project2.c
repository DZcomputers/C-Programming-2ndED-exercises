/* EXERCISE 2 - Chapter 2 - solved and finished 25/7/2026 at roughly 6:00 PM BRT */

#include <stdio.h>
#define PI_2DP 3.14f /* Value of pi to two decimal places. */

int main (void) {
	float sphereVolume;
	int radius;

	radius = 10;
	sphereVolume = (4 / 3) * PI_2DP * radius * radius * radius;

	printf("The volume of a sphere with a radius of %d meters is roughly %.1f cubic meters.\n", radius, sphereVolume);

	return 0;
}
