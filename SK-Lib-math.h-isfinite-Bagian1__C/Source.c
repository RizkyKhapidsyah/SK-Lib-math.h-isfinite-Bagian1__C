#include <stdio.h>      /* printf */
#include <math.h>       /* isfinite, sqrt */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("isfinite(0.0)       : %d\n", isfinite(0.0));
	printf("isfinite(1.0/2.0)   : %d\n", isfinite(1.0 / 2.0));
	printf("isfinite(-1.0/2.0)  : %d\n", isfinite(-1.0 / 2.0));
	printf("isfinite(sqrt(-1.0)): %d\n", isfinite(sqrt(-1.0)));

	_getch();
	return 0;
}