#include <stdio.h>
#include "libarary.h"

void main() {
	char isContinue = 'y';
	while (isContinue == 121) {
		//printf("Hello World \n");
		//my_funtion();
		//giai_pt_bac_2();
		//bai_1();
		//bai_2();
		//bai_3();
		bai_4();

		printf("do you want to continue (y/n): ");
		scanf_s(" %c", &isContinue);
	}
	printf("ket thuc chuong trinh");
}