#include<iostream>

using namespace std;

#define MAX 100000

/*
Input: Set[], set_size
1. Get the size of power set
    powet_set_size = pow(2, set_size)
2  Loop for counter from 0 to pow_set_size
     (a) Loop for i = 0 to set_size
          (i) If ith bit in counter is set
               Print ith element from set for this subset
     (b) Print separator for subsets i.e., newline

*/

int powerOfTwo(int n){
    int result = 2;
    for(int i=1;i<n;i++){
        result = result * 2;
    }

    return result;
}

int powerSet(int arr[], int n){
    int output[MAX];
    int min;
    int current_sum, current_difference;
    int count, total_sum = 0, set_sum;
    int power_set_size = powerOfTwo(n);
    for(int i=0;i<n;i++){
        total_sum += arr[i];
    }
    min = total_sum;
    for(int i=0;i<power_set_size;i++){
        count = 0;
        set_sum = 0;
        for(int j=0;j<n;j++){
            if(i & (1 << j)){
                output[count] = arr[j];
                count++;
            }
        }

        for(int m=0;m<count;m++){
            set_sum += output[m];
        }

        current_sum = total_sum - set_sum;

        if(current_sum > set_sum){
            current_difference = current_sum - set_sum;
        } else {
            current_difference = set_sum - current_sum;
        }

        if(current_difference < min){
            min = current_difference;
        }

        for(int k=0;k<MAX;k++){
            output[k] = 0;
        }
    }

    return min;
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[MAX];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int result = powerSet(arr, n);

    cout << result << endl;

    return 0;
}
