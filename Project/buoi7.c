#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "libarary.h"
#include <malloc.h>

void buoi7_bai_1() {
	linked_list l;
	linked_list_init(&l);
	linked_list_add_node(&l, 10);
	linked_list_add_node(&l, 20);
	linked_list_add_node(&l, 30);
	linked_list_add_node(&l, 40);

	printf("node2: %d \n", linked_list_get_val(&l, 2));
}