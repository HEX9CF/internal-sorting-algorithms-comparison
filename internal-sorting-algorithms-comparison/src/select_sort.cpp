/*
选择排序
 */
#include "../include/main.h"

static Cnt cnt;

Result selectSort(ElemType *a, int n) {
	cnt = {0, 0};

	for (int i = 0; i < n; i++) {
		int t = i;
		for (int j = i + 1; j < n; j++) {
			cnt.cmp++;
			if (a[j] < a[t]) {
				t = j;
			}
		}
		if (i != t) {
			swap(a[i], a[t]);
			cnt.mov += 3;
		}
	}

	return {"Select Sort", cnt};
} 
