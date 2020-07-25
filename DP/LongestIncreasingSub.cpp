#include<bits/stdc++.h>
using namespace std;
const int N = 100 + 1;
int n , arr[N] , dp[101][101];
int calc(int idx , int pre_value){
    if(idx == n)return 0;
    if(dp[idx][pre_value] != -1)
        return dp[idx][pre_value];
    int dontTake = calc(idx + 1 , pre_value);
    int take = 0;
    if(pre_value < arr[idx])
        take = calc(idx + 1 , arr[idx]) + 1;
    return dp[idx][pre_value] = max(dontTake , take);
}
int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    memset(dp , -1 , sizeof dp);
    cout << calc(0 , 0) << endl;
    return 0;
}