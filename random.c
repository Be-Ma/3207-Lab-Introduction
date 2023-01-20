
#include "random.h"
#include <stdio.h>

char randchar(void) {
	char letter = 65 + (rand() % 26);
	return letter;
}
