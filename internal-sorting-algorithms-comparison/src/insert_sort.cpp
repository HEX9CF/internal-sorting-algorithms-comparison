/*
直接插入排序
 */
#include "../include/main.h"

static Cnt cnt;
 
Result insertSort(ElemType *a, int n) {
	cnt = { 0, 0 };

	for (int i = 1; i < n; i++) {
		cnt.cmp++;
		if (a[i - 1] > a[i]) {
			ElemType t = a[i];
			cnt.mov++;
			int j = i - 1;
			while (j >= 0 && a[j] > t) {
				cnt.cmp++;
				a[j + 1] = a[j];
				cnt.mov++;
				j--;
			}
			a[j + 1] = t;
			cnt.mov++;
		}
	}
	return { "Insert Sort", cnt };
} 
