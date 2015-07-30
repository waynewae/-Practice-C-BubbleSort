#include<stdio.h>

void swap(int* r, int* l) {
	int tmp;
	tmp = *r;
	*r = *l;
	*l = tmp;
}

void BubbleSort(int* arr, int len) {
	int i, j;
	for(i = 0 ; i < len - 1 ; i++){
		for(j = len - 1 ; j > i ; j--){
			if(arr[j] < arr[j -1]) swap(&arr[j], &arr[j - 1]);
		}
	}
}

int main() {
	int i, len;
	int arr[10] = {55, 43, 1, 94, 32, 20, 9, 11, 17, 66};
	len = sizeof(arr) / sizeof(int);
	BubbleSort(arr, len);
	for(i = 0 ; i < 10 ; i++) printf("%d\t", arr[i]);
	printf("\n");
	return 0;
}
