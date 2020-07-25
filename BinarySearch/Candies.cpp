#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
ll Vs,Pt;
 
void check(ll n,ll k){
    ll temp = n;
    ll vasya=0,petya=0;
    while(n-k>=0){
       vasya += k;
       n-=k;
       if (n>=10){
            petya += n*10/100;
            n -= n*10/100;
       }
    }
    Vs = vasya;
    Pt = petya-abs(temp-(vasya+petya));
}
 
 
int main(){
	fastIO;
    ll n;
    cin>>n;
    ll result=0,Answer=n,r=n,l=1,mid;
    while(l<=r){
        mid = (l+r)/2;
        check(n,mid);
        if(Vs>=Pt){
            Answer = min(Answer,mid);
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << Answer;
	return 0;
}