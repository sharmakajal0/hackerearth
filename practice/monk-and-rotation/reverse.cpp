#include<iostream>

using namespace std;

void swap(int* a, int* b){
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end){
    while(start < end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void printArray(int A[], int n){
    for(int i=0;i<n;i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[3] = {1, 2 ,3};
    int n = 3;
    reverse(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}
