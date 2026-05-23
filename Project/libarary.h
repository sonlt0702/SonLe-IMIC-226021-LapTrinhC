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
void buoi5_btvn();
void buoi6_bai_1();
void buoi6_bai_2();
void buoi6_bai_3();
void buoi6_bai_4();

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

/**
* @brief viết hoa chuỗi
* @param char*: địa chỉ bắt đầu của chuỗi
*
*/
void str_uppercase(char* str);

/**
* @brief tìm vị trí xuất hiện đầu tiên của 1 kí tự trong chuỗi
* @param char*: địa chỉ bắt đầu của chuỗi
* @param char: kí tự cần tìm
* @return địa chỉ của kí tự (trả về 0 nếu không tìm thấy)
*
*/
char* str_findChar(char* str, char k);

/**
* @brief nối 2 chuỗi (max length 1000 kí tự)
* @param char*: địa chỉ bắt đầu của chuỗi 1
* @param char*: địa chỉ bắt đầu của chuỗi 2
* @return địa chỉ của chuỗi đã nối
*
*/
char* str_concat(char* str1, char* str2);

/**
* @brief kiểm tra chuỗi 2 có xuất hiện trong chuỗi 1 hay không
* @param char*: địa chỉ bắt đầu của chuỗi 1
* @param char*: địa chỉ bắt đầu của chuỗi 2
* @return 1 nếu có, 0 nếu không có
*
*/
int str_findStr(char* str1, char* str2);

/**
* @brief kiểu dữ liệu phân số
*/
typedef struct {
	int tu_so;
	int mau_so;
} phan_so;

/**
* @brief tính tích 2 phân số
* @param (phan_so): phân số A
* @param (phan_so): phân số B
* @return (phan_so): kết quả là tích 2 phân số
*
*/
phan_so tich_phan_so(phan_so A, phan_so B);

/**
* @brief tìm phân số lớn nhất trong mảng chứ danh sách phân số
* @param (phan_so*): địa chỉ bắt đầu của mảng phân số
* @param (int): số lượng phần tử
* @return (int): vị trí của phân số lớn nhất
*
*/
int tim_max_phan_so(phan_so* arr, int n);

/**
* @brief kiểu dữ liệu học sinh
*/
typedef struct {
	char* ten;
	float diem_toan;
	float diem_van;
} hoc_sinh;

/**
* @brief tìm học sinh có điểm trung bình (toán+văn)/2 cao nhất
* @param (hoc_sinh*): địa chỉ bắt đầu của mảng hoc_sinh
* @param (int): số lượng phần tử
* @return (int): vị trí của học sinh lớn nhất
*
*/
int tim_hoc_sinh_gioi_nhat(hoc_sinh* arr, int n);