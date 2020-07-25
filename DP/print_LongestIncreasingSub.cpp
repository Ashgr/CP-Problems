#include<bits/stdc++.h>
using namespace std;
int arr[10000] , n , dp[1000][100000];
// [2 , 4 , 1 , 3 , 1 , 6] 
// 2 , 4 , 6
// 2 , 1 , 1
int calc(int idx , int preValue){
    if(idx == n)
        return 0;
    if(dp[idx][preValue] != -1)
        return dp[idx][preValue];
    int dontTake = calc(idx + 1, preValue);
    int take = 0;
    if(arr[idx] > preValue)
        take = 1 + calc(idx + 1 , arr[idx]);
    return dp[idx][preValue] = min(dontTake , take);
}

void print(int idx , int preValue){
    if(idx == n)
        return ;
    // dont take
    if(calc(idx , preValue) == calc(idx + 1, preValue)){
        print(idx + 1 , preValue);
        return;
    }
    if(arr[idx] > preValue)
        if(calc(idx , preValue) == 1 + calc(idx + 1 , arr[idx])){
            cout << arr[idx] << " ";
            print(idx + 1, arr[idx]);
            return ;
        }
}
int main(){
    cin >> n;
    for(int i = 0 ; i < n ;i++)
        cin >> arr[i];
    memset(dp , -1 , sizeof dp);
    print(0 , 0);
    return 0;
}