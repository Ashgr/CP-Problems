#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;
 
int n,l,r,ans;
map<char,ll> pok;
string s;
 
int main(){
	fastIO;
    cin>>n>>s;
    l = 0 , r = 0 , ans = n;
    while(r!=n){
        pok[s[r]]++;
        int c = pok[s[r]];
        while(pok[s[l]]>1){
            pok[s[l]]--;
            l++;
        }
        if(c==1)ans = r-l+1;
        else ans = min(ans,r-l+1);
        r++;
    }
    cout<<ans;
}