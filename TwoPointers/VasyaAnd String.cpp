#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
 
    int l = 0 , r = 0 , a = 0 , ans = 0;
    while(r!=n){
        if(s[r]=='a')a++;
        if(a<=t){
            ans = max(ans,r-l+1);
        }
        while(a>t){
            if (s[l]=='a')a--;
            l++;
        }
        r++;
    }
    l = 0 , r = 0 ;
    int b = 0;
    while(r!=n){
        if(s[r]=='b')b++;
        if(b<=t){
            ans = max(ans,r-l+1);
        }
        while(b>t){
            if (s[l]=='b')b--;
            l++;
        }
        r++;
    }
    cout<<ans;
}