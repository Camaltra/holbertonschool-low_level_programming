#include <stdio.h>

void le_lievre_et_la_tortue(void) __attribute__ ((constructor));

/**
* le_lievre_et_la_tortue - Print a sentence before te main run
*/
void le_lievre_et_la_tortue(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
