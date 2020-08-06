#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
int const K = 100005;
int n , A[101],DP[K][2];

int calc(int k , int turn){
    if(K == 0)return !turn;
    if(DP[k][turn]!=-1)return DP[k][turn];
    int currW = !turn;
    for (int i = 0 ;i<n && currW != turn && A[i]<=k;i++){
        currW = calc(k-A[i],!turn);
    }
    return DP[k][turn] = currW;
}

int main() {
    int k;
    cin>>n>>k;
    for (int i = 0; i < K; i++)
        DP[i][0] = DP[i][1] = -1;
    for(int i = 0 ; i<n ; i++)cin>>A[i];
    if(calc(k,0)==0){
        cout<<"First";
    }
    else
    cout<<"Second";
}
