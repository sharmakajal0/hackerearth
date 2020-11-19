#include<iostream>

#define MAX 10000
/*
    Find the missing Number:

    You are given a list of n-1 integers are in the range of 1 to n. There are no duplicates
    in the list. One of the integers is missing in the list. Write an efficient code to find 
    the missing number.

    Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
    Output: 5
    Explanation: The missing number from 1 to 8 is 5

    Input: arr[] = {1, 2, 3, 5}
    Output: 4
    Explanation: The missing number from 1 to 5 is 4
*/

int findLargest(int arr[], int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void findMissing(int arr[], int n){
    int max = findLargest(arr, n);
    int sumtotal = (max * (max + 1))/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    
    if(sumtotal > sum){
        std::cout << sumtotal - sum << std::endl;
    }
    else{
        std::cout << "There's no missing number" << std::endl;
    }
}

int main() {
    int arr[MAX];
    int n;

    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }

    findMissing(arr, n);

    return 0;
}
