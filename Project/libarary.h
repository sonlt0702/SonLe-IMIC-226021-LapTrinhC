#pragma once
void my_funtion();
void giai_pt_bac_2();
void bai_1();
void bai_2();
void bai_3();
void bai_4();
void buoi3_bai_1();
void buoi3_bai_2();
void buoi3_bai_3();
void buoi3_bai_4();
void buoi3_bai_5();
void buoi3_bai_6();
void buoi3_bai_7();
void buoi4_bai_1();
void buoi4_bai_2();
void buoi4_bai_3();
void buoi5_bai_1();
void buoi5_bai_2();
void buoi5_bai_3();
void buoi5_bai_4();
void buoi5_bai_5();
/**
* @brief Cộng 2 số nguyên
* @param int: số nguyên 1
* @param int: số nguyên 2
* @return int - kết quả của phép cộng
*
*/
int cong_so_nguyen(int so_nguyen_1, int so_nguyen_2);
/**
* @brief Nhân 2 số nguyên
* @param int: số nguyên 1
* @param int: số nguyên 2
* @return int - kết quả của phép nhân
* @note không sử dụng toán tử *, sử dụng hàm cong_so_nguyen
*
*/
int nhan_so_nguyen(int so_nguyen_1, int so_nguyen_2);
/**
* @brief Kiểm tra chuỗi có bao nhiêu kí tự
* @param char*: địa chỉ bắt đầu của chuỗi
* @return int số lượng kí tự trong chuỗi
*
*/
int length_string(char* str);
/**
* @brief tính tổng các phần tử trong mảng
* @param int*: địa chỉ bắt đầu của mảng
* @param int số lượng phần tử của màng
* @return tổng các phần tử trong mảng
*
*/
int arr_sum(int* arr, int so_luong_phan_tu);
