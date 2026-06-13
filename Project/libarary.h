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
void buoi7_bai_1();
void buoi8_bai_1();
void buoi8_bai_2();
void buoi8_bai_3();
void buoi8_bai_4();
void buoi8_bai_5();
void function1();

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

typedef enum
{
	NAM,
	NU
} gt;

typedef enum
{
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU
} loai;



/**
* @brief kiểu dữ liệu học sinh
*/
typedef struct {
	char* ten;
	int tuoi;
	gt gioi_tinh; // 0: nam, 1: nu
	float diem_toan;
	float diem_van;
	loai loai; // 0:giỏi, 1: khá, 2: trung bình, 3: yếu
} hoc_sinh;

/**
* @brief tìm học sinh có điểm trung bình (toán+văn)/2 cao nhất
* @param (hoc_sinh*): địa chỉ bắt đầu của mảng hoc_sinh
* @param (int): số lượng phần tử
* @return (int): vị trí của học sinh lớn nhất
*
*/
int tim_hoc_sinh_gioi_nhat(hoc_sinh* arr, int n);

/**
* @brief kiểu dữ liệu node
*/
typedef struct
{
	void* next_node;	// địa chỉ của node kế tiếp
	int value;			// giá trị của node
} node;

/**
* @brief kiểu dữ linked list
*/
typedef struct
{
	node* root_node; // địa chỉ của node đầu tiên.
	int size;		 // số lượng node
} linked_list;

/**
* @brief Hàm khởi tạo linked list
* @param (linked_list*): địa chỉ của linked list
*/
void linked_list_init(linked_list* ll);

/**
* @brief Hàm thêm 1 node vào cuối linked list
* @param (linked_list*): địa chỉ của linked list
* @param (int): giá trị của node cần thêm
*/
void linked_list_add_node(linked_list* ll, int val);

/**
* @brief Đọc giá trị của 1 node trong linked list
* @param (linked_list*): địa chỉ của linked list
* @param (int): vị trí của node cần đọc giá trị
* @return (int): giá trị của node tại vị trí index
*/
int linked_list_get_val(linked_list* ll, int index);

/**
* @brief Hàm show all node trong linked list
* @param (linked_list*): địa chỉ của linked list
*/
void linked_list_show_all_node(linked_list* ll);

/**
* @brief Hàm xóa 1 node trong linked list
* @param (linked_list*): địa chỉ của linked list
* @param (int): vị trí của node cần xóa
*/
void linked_list_remove_node(linked_list* ll, int index);

/**
* @brief Hàm insert 1 node vào linked list tại ví trí bất kì
* @param (linked_list*): địa chỉ của linked list
* @param (int): vị trí của node cần insert
*/
void linked_list_insert_node(linked_list* ll, int index, int val);

// cấp phát vùng nhớ tránh lãng phí
#pragma pack(push)
#pragma pack(1)
typedef struct
{
	char x;
	int y;
} test;
#pragma pack(pop)

typedef struct
{
	char x;
	int y;
} test2;

typedef union
{
	unsigned short gia_tri;
	unsigned char arr[2];
} union_t;

typedef union
{
	unsigned char value;
	struct
	{
		char _O : 1;
		char _1 : 1;
		char _2 : 1;
		char _3 : 1;
		char _4 : 1;
		char _5 : 1;
		char _6 : 1;
		char _7 : 1;
	} BIT;
} byte_t;

/**
* @brief kiểu dữ liệu học sinh
*/
typedef struct {
	char* ten;
	int tuoi;
	float diem_toan;
	float diem_van;
} hoc_sinh_t;

/**
* @brief tìm học sinh có điểm trung bình (toán+văn)/2 cao nhất
* @param (hoc_sinh*): địa chỉ bắt đầu của mảng hoc_sinh
* @param (int): số lượng phần tử
* @return (int): vị trí của học sinh lớn nhất
*
*/
int tim_hoc_sinh_t_gioi_nhat(hoc_sinh_t* arr, int n);