/*
堆排序
 */
#include "../include/main.h"

static Cnt cnt;

Status heapAdjust(ElemType *a, int s, int m) {
	ElemType t = a[s];
	cnt.mov++;
	for (int j = s * 2 + 1; j <= m; j = j * 2 + 1) {
		cnt.cmp++;
		if (j < m && a[j] < a[j + 1]) {
			j++;
		}
		cnt.cmp++;
		if (t >= a[j]) {
			break;
		}
		a[s] = a[j];
		cnt.mov++;
		s = j;
	}
	a[s] = t;
	cnt.mov++;
	return OK;
}

Result heapSort(ElemType *a, int n) {
	cnt = {0, 0};

	for (int i = n / 2 - 1; i >= 0; i--) {
		heapAdjust(a, i, n - 1);
	}
	for (int i = n - 1; i > 0; i--) {
		swap(a[0], a[i]);
		cnt.mov += 3;
		heapAdjust(a, 0, i - 1);
	}
	return {"Heap Sort", cnt};
} 
