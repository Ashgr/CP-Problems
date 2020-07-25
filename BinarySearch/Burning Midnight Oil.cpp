#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
int n , k;
 
bool check_V(int v){
    int lines = 0;
    int power = 0;
    while(lines<n){
        lines+=(v/pow(k,power));
        if ((v/pow(k,power))==0 && lines<n)return false;
        power++;
    }
    return true;
}
 
int main(){
	fastIO;
    cin>>n>>k;
    ll l = 0 , r = n, ans = n;
    while(l<=r){
        ll mid = (r+l)/2;
        if (check_V(mid)){
            r = mid - 1;
            ans = min(ans,mid);
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans;
}