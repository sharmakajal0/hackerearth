#include<stdio.h>
#include<assert.h>
#define REP(i, a, b) for(i=a;i<b;i++)
#define rep(i, n) REP(i, 0, n)

#define M 1000000007

int dp[1001][1001];
int res[1001];

int main(){
    int T, N;
    int i, j;
    dp[0][0] = 1;
    for(i=0;i<1000;i++) for(j=0;j<1000;j++) if(dp[i][j]){
        dp[i+1][j] = (dp[i+1][j] dp[i][j] * (long long)(j+1)) % M;
        
    }
}