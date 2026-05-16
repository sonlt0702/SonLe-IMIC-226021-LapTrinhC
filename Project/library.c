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