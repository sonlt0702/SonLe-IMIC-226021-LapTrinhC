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

void buoi5_btvn() {
	// bài 1
	char str1[] = "hello world 123";
	int len_str = length_string(str1);
	printf("chuoi co do dai: %d \n", len_str);

	// bài 2
	char str2[] = "Hello worLd 123";
	str_uppercase(str2);
	printf("chuoi uppercase: %s \n", str2);

	// bài 3
	char str3[] = "Hello worLd 123";
	char* ptr = str_findChar(str3, 'L');
	if (ptr != 0) {
		printf("dia chi tim dc: %p \n", ptr);
	} else
		printf("khong tim thay ki tu\n");

	// bài 4
	char str41[] = "Hello, your name is: ";
	char str42[] = "Son123";

	char* str4 = str_concat(str41, str42);
	printf("%s \n", str4);
	printf("chieu dai chuoi sau khi noi: %d \n", length_string(str4));

	// bài 5
	char str51[] = "hello world 123";
	char str52[] = "son";
	int isFindStr = str_findStr(str51, str52);
	if (isFindStr == 1)
		printf("tim thay chuoi con");
	else
		printf("khong tim thay chuoi con");
}


