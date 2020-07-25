#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
int n,m,A[3001],B[3001],freqB[1000001],l,r,op;
ll arr[100100];
 
int main(){
	fastIO;
	cin>>n>>m;
	for(int i = 0 ; i<n ; i++){
        cin>>A[i];
	}
	for(int i = 0 ; i<m ; i++){
        cin>>B[i];
	}
	while(r<m){
        if(B[r]>=A[l]){
            op++;
            l++;
        }
        r++;
	}
 
	/*for(int i = 0 ; i < n ; i++){
        if(freqB[A[i]]==0){
            op++;
            freqB[A[i]]++;
        }
	}*/
    if(n-op<0)cout<<0;
    else cout<<n-op;
    return 0;
}