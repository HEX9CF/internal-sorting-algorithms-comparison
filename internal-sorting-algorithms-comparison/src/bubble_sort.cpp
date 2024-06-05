/*
冒泡排序
 */ 
#include "../include/main.h"

static Cnt cnt;

Result bubbleSort(ElemType *a, int n) { 
	cnt = {0, 0};

	bool exchange = 0;
	do {
		exchange = 0;
		for (int i = 0; i < n - 1; i++) {
			cnt.cmp++;
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				exchange = 1;
				cnt.mov += 3;
			}
		}
	} while (exchange);

	return {"Bubble Sort", cnt};
}
