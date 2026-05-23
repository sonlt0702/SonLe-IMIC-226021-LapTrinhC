#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "libarary.h"
#include <malloc.h>
//bài 1
void buoi6_bai_1() {
	// yeu cau: nhap gia tri cho mang
	//      + nhập số lượng phần tử trong mảng
	//		+ nhập vào giá trị của từng phần tử
	// in ra mảng theo format {1,2,3,4,5,...}
	// gọi hàm sum để tính tổng giá trị trong mảng
	int* arr;
	int n = 0;
	printf("Nhap so luong phan tu trong mang: \n");
	scanf(" %d", &n);

	arr = malloc(n*4);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap gia tri phan tu thu %d: \n", i + 1);
		scanf(" %d", &arr[i]);
	}
	printf("Mang cua ban la: { ");
	for (int i = 0; i < n; i++)
	{
		if (i + 1 == n) {
			printf("%d ", arr[i]);
		}
		else {
			printf("%d, ", arr[i]);
		}
	}
	printf("}\n\n");

	printf("Tong gia tri trong mang: %d\n\n", arr_sum(arr, n));

	free(arr);
}


