/*
希尔排序
 */
#include "../include/main.h"

static Cnt cnt;

Result shellSort(ElemType *a, int n) {
	cnt = {0, 0};

	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i += gap) {
			cnt.cmp++;
			if (a[i - gap] > a[i]) {
				ElemType t = a[i];
				cnt.mov++;
				int j = i - gap;
				while (j >= 0 && a[j] > t) {
					cnt.cmp++;
					a[j + gap] = a[j];
					cnt.mov++;
					j -= gap;
				}
				a[j + gap] = t;
				cnt.mov++;
			}
		}
	}
	return {"Shell Sort", cnt};
} 
