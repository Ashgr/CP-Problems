#include<bits/stdc++.h>
using namespace std;
string s , t;
int dp[1000][1000];
int calc(int i , int j){
    if(i >= s.size() or j >= t.size())
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    if(s[i] == t[j]){
        int value = calc(i + 1 , j + 1) + 1;
        return dp[i][j] = value;
    }
    int moveI = calc(i + 1 , j);
    int moveJ = calc(i , j + 1);
    return dp[i][j] = max(moveI , moveJ);
}
int main(){
    cin >> s >> t;
    memset(dp , -1 , sizeof dp);
    calc(0,0);
    return 0;
}