#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
int n ,arr[100005];
 
int main(){
	fastIO;
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int l = 0 , r = n-1 , bob = 0 , alice = 0;
    while(l<=r){
        if(alice<=bob){
            alice+=arr[l];
            l++;
        }
        else{
            bob+=arr[r];
            r--;
        }
    }
    cout<<l<<" "<<n-l;
}