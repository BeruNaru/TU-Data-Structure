#include <stdio.h>

int hello(void) {

	hello();
	printf("Hello world.\n");
	return 0;
}


int main(void) {

	 hello();

	return 0;
}
