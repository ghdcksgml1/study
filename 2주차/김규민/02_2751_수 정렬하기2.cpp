// 언어 : C++ , (성공/실패) : 1/1 , 메모리 : 9832 KB , 시간 : 316ms

#include <iostream>
using namespace std;

//merge sort - 시간복잡도 (최악, 최고, 평균 모두) nlogn

int nums[1000000];
int sorted[1000000];

void merge(int arr[], int left, int middle, int right) {
	int i = left;
	int j = middle + 1;
	int k = left; 

	while (i <= middle && j <= right) { 
		if (arr[i] <= arr[j]) {
			sorted[k++] = arr[i++];
		}
		else {
			sorted[k++] = arr[j++];
		}
	}

	
	//옮겨지지 않은 게 있을 때만 나머지 옮김
	if(i > middle){
		for (int m = j; m <= right; m++) {
			sorted[k++] = arr[m];
		}
	}
	
	else {
		for(int m = i; m <= middle; m++){
			sorted[k++] = arr[m];
		}
	}
	

	
	for (int m = left; m <= right; m++) { //임시배열을 배열로 복사
		arr[m] = sorted[m];
	}
}

void mergeSort(int arr[], int left, int right) {

	int middle;
	if (left < right) {
		middle = (left + right) / 2; //분할
		mergeSort(arr, left, middle); //정복
		mergeSort(arr, middle + 1, right); //정복
		merge(arr, left, middle, right); //결합
	}
	
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; //수의 개수 (1 이상 1000000 이하)
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	mergeSort(nums, 0, N-1);

	for (int i = 0; i < N; i++) {
		cout << nums[i] << "\n";
	}

	return 0;
}
