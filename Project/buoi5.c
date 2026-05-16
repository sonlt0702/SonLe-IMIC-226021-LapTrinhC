#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "libarary.h"
//bài 1
void buoi5_bai_1() {
	//char c = 97; // 0x61 0142 0b01100001 'a'
	//printf("c co gia tri la: %d \n", c);
	//printf("c co gia tri la: %c \n", c);

	//char str[6] = {'H', 'e', 'l', 'l', 'o', 0};
	//char str[] = {'H', 'e', 'l', 'l', 'o', 0};

	char str[] = "Hello anh em 0";
	//chương trình in ra số lượng kí tự của string
	int i = 0;
	char* ps = str;
	while (*ps != 0) {
		i++;
		ps++;
	}
	printf("chuoi co %d ki tu \n", i);
	printf("chuoi: %s \n", str);
}
void buoi5_bai_2() {
	char str[] = "hello World 123";

	int i = 0;
	while (str[i] != 0) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] -= 32;
		}
		i++;
	}
	printf("chuoi viet hoa: %s \n", str);

	char str1[] = "hello World 124";

	int j = 0;
	char* ptr = str1;
	while (*ptr != 0) {
		if (*ptr >= 'a' && *ptr <= 'z') {
			*ptr -= 32;
		}
		i++;
		ptr++;
	}
	printf("chuoi 1 viet hoa: %s \n", str1);
}
void buoi5_bai_3() {
	int kq1 = cong_so_nguyen(9, 3);
	printf("ket qua cong: %d \n", kq1);

	int kq2 = nhan_so_nguyen(9, 3);
	printf("ket qua nhan: %d \n", kq2);
}
void buoi5_bai_4() {
	char str[] = "hello world 123";
	int len_str = length_string(str);
	printf("chuoi co do dai: %d \n", len_str);
}

void buoi5_bai_5() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int kq = arr_sum(arr, 5);
	printf("tong cac phan tu: %d \n", kq);
	
}



