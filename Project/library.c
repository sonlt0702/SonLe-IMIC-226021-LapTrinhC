#include "libarary.h"
#include <stdio.h>
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
phan_so tich_phan_so(phan_so A, phan_so B)
{
	phan_so C;
	C.tu_so = A.tu_so * B.tu_so;
	C.mau_so = A.mau_so * B.mau_so;
	return C;

};

int tim_max_phan_so(phan_so* arr, int n)
{
	phan_so psmax = *arr;
	int vi_tri_max = 0;
	for (int i = 1; i < n; i++)
	{
		float valmax = psmax.tu_so * 1.0 / psmax.mau_so;
		float valcurrent = arr[i].tu_so * 1.0 / arr[i].mau_so;
		if (valcurrent > valmax) {
			psmax = arr[i];
			vi_tri_max = i;
		}
	}
	return vi_tri_max;
}

int tim_hoc_sinh_gioi_nhat(hoc_sinh* arr, int n)
{
	float diem_max = 0;
	int vi_tri_max = 0;
	for (int i = 0; i < n; i++)
	{
		float diem_tb = (arr[i].diem_toan + arr[i].diem_van) / 2;
		if (diem_tb > diem_max) {
			diem_max = diem_tb;
			vi_tri_max = i;
		}
	}
	return vi_tri_max;
}
int tim_hoc_sinh_t_gioi_nhat(hoc_sinh_t* arr, int n)
{
	float diem_max = 0;
	int vi_tri_max = 0;
	for (int i = 0; i < n; i++)
	{
		float diem_tb = (arr[i].diem_toan + arr[i].diem_van) / 2;
		if (diem_tb > diem_max) {
			diem_max = diem_tb;
			vi_tri_max = i;
		}
	}
	return vi_tri_max;
}

void linked_list_init(linked_list* ll)
{
	ll->root_node = NULL;
	ll->size = 0;
}

void linked_list_add_node(linked_list* ll, int val)
{
	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;
	if (ll->root_node == NULL)
	{
		ll->root_node = n;
	}
	else
	{
		node* temp = ll->root_node;
		for (int i = 0; i < ll->size - 1; i++)
		{
			temp = (node*)(temp->next_node);
		}
		temp->next_node = n;
	}
	ll->size++;
}

int linked_list_get_val(linked_list* ll, int index)
{
	node* temp = ll->root_node;
	for (int i = 0; i < index; i++)
	{
		temp = (node*)(temp->next_node);
	}
	return temp->value;
}

void linked_list_show_all_node(linked_list* ll)
{
	node* temp = ll->root_node;
	for (int i = 0; i < ll->size - 1; i++)
	{
		printf("gia tri cua node tai vi tri %d: %d\n", i, temp->value);
		temp = (node*)(temp->next_node);
	}
	printf("gia tri cua node tai vi tri %d: %d\n", ll->size - 1, temp->value);
}

void linked_list_remove_node(linked_list* ll, int index)
{
	node* temp = ll->root_node;
	node* preTemp = temp;
	if (index == 0)
		ll->root_node = temp->next_node;
	for (int i = 0; i < index; i++)
	{
		preTemp = temp;
		temp = (node*)(temp->next_node);
	}
	preTemp->next_node = temp->next_node;
	ll->size--;
	free(temp);
}

void linked_list_insert_node(linked_list* ll, int index, int val)
{
	node* n = malloc(sizeof(node));
	n->value = val;
	n->next_node = NULL;

	node* temp = ll->root_node;
	node* preTemp = temp;
	if (index == 0)
	{
		ll->root_node = n;
		n->next_node = temp;
	}
	else
	{
		for (int i = 0; i < index; i++)
		{
			preTemp = temp;
			temp = (node*)(temp->next_node);
		}
		preTemp->next_node = n;
		n->next_node = temp;
	}
	ll->size++;
}