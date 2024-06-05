#include "../include/main.h"
#include "../include/sort.h"

int n, m, t;
ElemType a[N], b[N];

Status testAlgorithm(Result(*sort)(ElemType*, int), ElemType* a, int n) {
	memcpy(b, a, n * sizeof(ElemType));
	Result r = sort(b, n);
	cout << "算法名称：" << r.name << "\n";
	cout << "比较次数：" << r.cnt.cmp << "\n";
	cout << "移动次数：" << r.cnt.mov << "\n"; 
	cout << "排序结果：";
	for(int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << "\n\n";
	return OK;
}

 int main() { 
	 cout << "请输入待排序表的表长：";
	 cin >> n;
	 cout << "请输入待排序表的最大值：";
	 cin >> m;
	 cout << "请输入测试次数：";
	 cin >> t;

	 for(int k = 0; k < t; k++) { 
		 system("cls");
		 cout << "- 第" << k + 1 << "次测试 -" << "\n";
		 cout << "原始数据：";
		 srand(time(0));
		 for (int i = 0; i < n; i++) {
			 a[i] = rand() % m;
			 cout << a[i] << " ";
		 }
		 cout << "\n\n";

		 testAlgorithm(bubbleSort, a, n);
		 testAlgorithm(insertSort, a, n);	
		 testAlgorithm(selectSort, a, n);	
		 testAlgorithm(quickSort, a, n);	
		 testAlgorithm(shellSort, a, n);	
		 testAlgorithm(heapSort, a, n);	

		 system("pause");
	 } 
	return 0;
}


