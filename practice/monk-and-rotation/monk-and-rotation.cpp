#include<iostream>

using namespace std;

#define MAX 1000000

void printArray(int arr[], long int n){
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

// void rightRotateByOne(int A[], int n){
//     int last = A[n - 1];
//     for(int i = n-2;i>=0;i--){
//         A[i + 1] = A[i];
//     }
//     A[0] = last;
// }

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(int A[], int start, int end){
	while(start < end){
		swap(&A[start], &A[end]);
		start++;
		end--;
	}
}

void reversalRotate(int A[], int d, int n){
	if(d > n){
		d = d % n;
	}
	reverse(A, 0, n - 1);
	reverse(A, 0, d - 1);
	reverse(A, d, n - 1);
}

void rightRotate(int A[], int k, int n){
	if(k > n){
		k = k % n;
	}
    int last;
	for(int i=0;i<k;i++){
		last = A[n-1];
		for(int j=n-2;j>=0;j--){
			A[j+1] = A[j];
		}
		A[0] = last;
    }
}

int main(){
	int test_cases;
    long int k, n;
	int values[2];
	int arr[MAX];
	cin >> test_cases;
	for(int i=0;i<test_cases;i++){
		for(int j=0;j<2;j++){
			cin >> values[j];
		}
		n = values[0];
		k = values[1];

		for(int m=0;m<n;m++){
			cin >> arr[m];
		}
		
        // rightRotate(arr, k, n);
		reversalRotate(arr, k, n);
		printArray(arr, n);
	}

	return 0;
}
