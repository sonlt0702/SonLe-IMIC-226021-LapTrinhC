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
	linked_list_add_node(&l, 50);
	linked_list_add_node(&l, 60);

	printf("node2: %d \n", linked_list_get_val(&l, 2));

	// Bài tập về nhà

	printf("Show all node\n");
	linked_list_show_all_node(&l);
	
	int index = 0;
	printf("Remove node %d\n", index);
	linked_list_remove_node(&l, index);

	printf("Show all node after remove\n");
	linked_list_show_all_node(&l);

	int index1 = 0;
	int value = 70;
	printf("Insert 1 node co value: %d, tai vi tri %d\n", value, index1);
	linked_list_insert_node(&l, index1, value);
	
	printf("Show all node after insert\n");
	linked_list_show_all_node(&l);

}