#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;

const int N = 1e5 + 5;
int n , A[N],B[N],C[N],DP[N][101];
int calc(int idx , char pre_value){
    if (idx == n)return 0;
    if (DP[idx][pre_value] != -1)return DP[idx][pre_value];
    int a = 0 , b = 0 , c = 0;
    if (pre_value == 'X'){
        a = calc(idx + 1 , 'a') + A[idx];
        b = calc(idx + 1 , 'b') + B[idx];
        c = calc(idx + 1 , 'c') + C[idx];
        return DP[idx][pre_value] = max(a , max(b,c));
    }
    if (pre_value == 'a'){
        b = calc(idx + 1 , 'b') + B[idx];
        c = calc(idx + 1 , 'c') + C[idx];
        return DP[idx][pre_value] = max(b , c);
    }
    if (pre_value == 'b'){
        a = calc(idx + 1 , 'a') + A[idx];
        c = calc(idx + 1 , 'c') + C[idx];
        return DP[idx][pre_value] = max(a,c);
    }
    if (pre_value == 'c'){
        b = calc(idx + 1 , 'b') + B[idx];
        a = calc(idx + 1 , 'a') + A[idx];
        return DP[idx][pre_value] = max(a , b);
    }
}

int main(){
    fastIO;
    cin>>n;
    memset(DP,-1,sizeof DP);
    for(int i = 0 ; i<n ; i++){
        cin>>A[i]>>B[i]>>C[i];
    }
    cout<<calc(0,'X');
}
