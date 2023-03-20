#include <stdio.h>

int main(void){

	int a[5] = { 0,1 ,2,3,4 };
	int* b;

	printf("a[1] = %d\n", a[1]);  //*가 주소인지 데이터인지 코드보고 판단
	printf("a[2] = %d\n" , *(a +2));
	printf("a[2] = %d\n", *a);

	return 0;
}

//포인터
