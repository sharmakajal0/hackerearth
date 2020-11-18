#include<iostream>

#define MAX 100000

using namespace std;

int find_min(int arr[], int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int one[2];
    int two[MAX];
    int n, k;
    int t, j;
    int time;
    int result;

    cin >> t;
    while(t > 0){
        for(int i=0;i<2;i++){
            cin >> one[i];
        }
        n = one[0];
        k = one[1];
        // cout << "value of k: " << k << endl;
        for(int i=0;i<n;i++){
            cin >> two[i];
        }

        time = find_min(two, n);

        if(time <= k){
            result = k - time;
            cout << result << endl;
        }
        else{
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}