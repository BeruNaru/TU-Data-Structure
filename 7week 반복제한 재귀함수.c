#include <stdio.h>

int fac(int num) {

	if (num == 0 || num == 1)
		return 1;

	else
		printf("current num = %d\n", num);
		return num * fac(num - 1);

}



int main(int argc, char* argv[]) {

	int num = 0;
	int result = 0;
	
	if (argc < 2) {
		printf("input int val.\n");
		return 0;
	}

	num = atoi(argv[1]);

		result = fac(num);


	printf("Result = %d\n", result);


}
