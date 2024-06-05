/*
快速排序
 */
#include "../include/main.h"

static Cnt cnt;

int divide(ElemType *a, int low, int high) {
	ElemType pivotkey = a[low];
	while (low < high) {
		while (low < high && a[high] >= pivotkey) {
			cnt.cmp++;
			high--;
		}
		swap(a[low], a[high]);
		cnt.mov += 3;
		while (low < high && a[low] <= pivotkey) {
			cnt.cmp++;
			low++;
		}
		swap(a[low], a[high]);
		cnt.mov += 3;
	}
	return low;
}

void qs(ElemType *a, int low, int high) {
	cnt.cmp++;
	if (low < high) {
		int pivotloc = divide(a, low, high);
		qs(a, low, pivotloc - 1);
		qs(a, pivotloc + 1, high);
	}
}

Result quickSort(ElemType *a, int n) {
	cnt = {0, 0};

	qs(a, 0, n - 1);

	return {"Quick Sort", cnt};
} 
