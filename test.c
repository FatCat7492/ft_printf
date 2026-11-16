#include <stdio.h>
#include <limits.h>

int main()
{
	unsigned u = 3000000000;

	printf("UINT_MAX: %u\n", UINT_MAX);
	printf("UINT_MAX: %d\n", UINT_MAX);
	printf("UINT_MAX: %d\n\n", UINT_MAX);

	printf("u: 3000000000: %u\n", u);
	printf("d: 3000000000: %d\n", u);
	printf("x: 3000000000: %x\n", u);

}
