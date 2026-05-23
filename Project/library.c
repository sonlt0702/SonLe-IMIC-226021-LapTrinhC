#include "libarary.h"
int cong_so_nguyen(int so_nguyen_1, int so_nguyen_2) {
	return so_nguyen_1 + so_nguyen_2;
}

int nhan_so_nguyen(int so_nguyen_1, int so_nguyen_2) {
	int kq = 0;
	for (int i = 0; i < so_nguyen_2; i++)
	{
		kq = cong_so_nguyen(kq, so_nguyen_1);
	}
	return kq;
}
int length_string(char* str)
{
	int i = 0;
	while (*str != 0) {
		i++;
		str++;
	}
	return i;
}
int arr_sum(int* arr, int so_luong_phan_tu)
{
	int tong = 0;
	for (int i = 0; i < so_luong_phan_tu; i++)
	{
		tong += arr[i];
	}
	return tong;
}
void str_uppercase(char* str)
{
	int i = 0;
	while (*str != 0) {
		if (*str >= 'a' && *str <= 'z') {
			*str -= 32;
		}
		i++;
		str++;
	}
}
char* str_findChar(char* str, char k)
{
	while (*str != 0) {
		if (*str == k) {
			return str;
		}
		str++;
	}
	return 0;
}

char* str_concat(char* str1, char* str2)
{
	char str[1000] = "";
	char* ptr = str1;
	int currentStr = 1;
	int i = 0;
	while (i < 1000) {
		if (*ptr == 0) {
			if (currentStr == 1) {
				ptr = str2;
				currentStr++;
			}
			else {
				str[i] = 0;
				break;
			}
			
		}
		str[i] = *ptr;
		i++;
		ptr++;
	}
	return str;
}

int str_findStr(char* str1, char* str2)
{
	char* ptr = str2;
	int i = 0;
	while (*str1 != 0) {

		if (*ptr != 0) {
			if (*str1 == *ptr) {
				i++;
				ptr++;
			}
			else {
				ptr = str2;
				str1 = str1 - i;
				i = 0;
			}
		}
		else {
			return 1;
		}
		str1++;
	}
	return 0;
}