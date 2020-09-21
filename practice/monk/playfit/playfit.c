#include<stdio.h>

#define MAX 1000000

int maximum_difference(int arr[], long int n){
    int max = 0;
    int difference;
    for(int i=1;i<n;i++){
        difference = arr[i] - arr[i-1];
        if(difference > max){
            max = difference;
        }
    }
    
    return max;
}

int main(){
    int arr[MAX];
    int n;
    int ans, t;

    scanf("%d", &t);

    while(t > 0){
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        ans = maximum_difference(arr, n);

        if(ans > 0){
            printf("%d\n", ans);
        }
        else{
            printf("UNFIT\n");
        }
        ans = 0;
        t--;
    }

    return 0;
}