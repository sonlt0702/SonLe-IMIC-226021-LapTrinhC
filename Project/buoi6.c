#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "libarary.h"
#include <malloc.h>

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

void buoi6_bai_2() {
	int a = 1;

	phan_so b = {1,2};

	phan_so c = { .tu_so = 2, .mau_so = 3 };

	phan_so d = tich_phan_so(b, c);
}

void buoi6_bai_3() {

	phan_so arr[5] = { {1,2},{2,3},{5,11},{8,23},{7,12} };
	int maxIndex = tim_max_phan_so(arr, 5);
	phan_so psmax = arr[maxIndex];
	printf("phan so lon nhat la: %d/%d, index thu: %d\n", psmax.tu_so, psmax.mau_so, maxIndex);
}

// xây dựng kiểu dữ liệu để miêu tả đối tượng là học sinh (hoc_sinh)
//  + tên học sinh
//  + điểm toán
//  + điểm văn
// khai báo mảng bao gồm 5 phần tử hoc_sinh, khởi tạo giá trị ban đầu cho nó
// viết hàm tìm học sinh có điểm trung bình (toán+văn)/2 cao nhất
// sử dụng hàm và in tên , điểm của học sinh này ra
void buoi6_bai_4() {
	hoc_sinh arr[] = {
		{"Huy", 9.5, 5.5},
		{"An", 8.7, 6.5},
		{"Tom", 6.0, 7.5},
		{"Son", 9, 6.5},
		{"Dan", 8, 7}
	};
	int vi_tri_hsg = tim_hoc_sinh_gioi_nhat(arr, sizeof(arr)/sizeof(arr[0]));
	printf("hoc sinh gioi nhat ten: %s, vi tri: %d\n", arr[vi_tri_hsg].ten, vi_tri_hsg+1);
}
