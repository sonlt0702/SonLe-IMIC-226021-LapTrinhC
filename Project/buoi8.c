#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "libarary.h"
#include <malloc.h>

void buoi8_bai_1() {

	char* convert_gt[] = { "NAM", "NU" };

	char* convert_loai[] = { "GIOI", "KHA", "TRUNG BINH", "YEU"};

	hoc_sinh ds_hoc_sinh[] = {
		{.ten = "An", .diem_toan = 8.5, .diem_van = 7.0, .tuoi = 17, .gioi_tinh = NAM, .loai = KHA},
		{.ten = "Thu", .diem_toan = 7.5, .diem_van = 8.0, .tuoi = 17, .gioi_tinh = NU, .loai = GIOI},
		{.ten = "Nam", .diem_toan = 9.0, .diem_van = 8.0, .tuoi = 17, .gioi_tinh = NAM, .loai = GIOI}
	};
	int vitri_hs_gioi_nhat = tim_hoc_sinh_gioi_nhat(ds_hoc_sinh, sizeof(ds_hoc_sinh) / sizeof(ds_hoc_sinh[0]));
	hoc_sinh hs_gioi_nhat = ds_hoc_sinh[vitri_hs_gioi_nhat];
	printf("ten: %s, tuoi: %d, gioi tinh: %s, diem toan: %.1f, diem van: %.1f, loai: %s",
		hs_gioi_nhat.ten, hs_gioi_nhat.tuoi, convert_gt[hs_gioi_nhat.gioi_tinh], hs_gioi_nhat.diem_toan, hs_gioi_nhat.diem_van, convert_loai[hs_gioi_nhat.loai]);
}

void buoi8_bai_2() {
	//sử dụng union để tách byte
	unsigned short val = 0x14d2;
	unsigned char low;
	unsigned char high;

	union_t t = { val };

	low = t.arr[0];
	high = t.arr[1];

	printf("low: %x \n", low);
	printf("high: %x \n", high);
}
void buoi8_bai_3() {
	byte_t A;
	A.value = 0;
	A.BIT._1 = 1;
	A.BIT._3 = 1;

	printf("gia tri: %d \n", A.value);
}

void buoi8_bai_4() {
	//thao tác với file
	// open file
	FILE* pf = fopen("D:\\Learning\\CC++\\Document\\file.txt", "w");

	if (pf == NULL) {
		printf("mo file that bai\n");
		return;
	}
	else {
		printf("mo file thanh cong\n");
	}
	// read / write
	//char c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);
	//c = fgetc(pf);
	//printf("c: %c (%d) \n", c, c);

	fputc('1', pf);
	fputc('2', pf);
	fputc('3', pf);
	fputc('4', pf);
	fputc('5', pf);



	// close file
	fclose(pf);
}


