//划分
#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int Partition(int arr[], int l, int r) {

	int v = arr[l];
	int j = l, i;
	for (i = l + 1; i <= r; i++) {
		if (arr[i]<v) {
			swap(&arr[j + 1], &arr[i]);
			j++;
		}
	}
	swap(&arr[l], &arr[j]);

	return j;
}
void QuickSort(int arr[], int l, int r) {

	if (l >= r)return;
	int p = Partition(arr, l, r);
	QuickSort(arr, l, p - 1);
	QuickSort(arr, p + 1, r);
}


void doQuickSort(int arr[],int n) {

	QuickSort(arr, 0, n - 1);
}


int  main() {
	int arr [10]= { 3,5,7,8,9,1,4,6,2,0 };
	int i = 0;
	for (i; i < 10; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");

	doQuickSort(arr, 10);
	for (i = 0; i < 10; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
	scanf("%d", &i);
	return 0;
}