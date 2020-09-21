#include<iostream>

using namespace std;

#define MAX 1000000

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void right_rotation(int arr[], int n, int k){
	int rotated_array[MAX];
	int start = 0;
	int end = n-1;
	int i=0;
	int index = 0;
	while(i<k){
		arr[index] = arr[start];
		arr[start] = arr[end];
		int temp = start;
		while(index != end){
			arr[++start] = arr[index];
			index++;
		}
		start = temp;
		start++;
		i++;
	}
}

int main(){
	int test_cases, n, k;
	int values[2];
	int arr[MAX];
	cin >> test_cases;
	for(int i=0;i<test_cases;i++){
		n = values[0];
		k = values[1];
		cin >> n;
		cin >> k;
		for (int j=0;j<n;j++){
			cin >> arr[j];
		}
		right_rotation(arr, n, k);
		printArray(arr, n);
	}

	return 0;
}
