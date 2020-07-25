#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
int freq[4];
 
bool check(string s){
    int ar[4] = {0};
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')ar[1]++;
        else if(s[i]=='2')ar[2]++;
        else if(s[i]=='3')ar[3]++;
        if(ar[1] && ar[2] && ar[3]){
            return true;
        }
    }
    return false;
}
 
int main(){
    fastIO;
    int t;
    string S;
    cin>>t;
    while(t--){
        cin>>S;
        ll l = 0,r = 1,ans = S.size() + 100;
        freq[1]=freq[2]=freq[3] = 0;
        freq[S[0]-'0']++;
        if(check(S)){
            while(r<S.size()){
                freq[S[r]-'0']++;
                while(l<r&&freq[1]&&freq[2]&&freq[3]){
                    ans=min(ans,r-l+1);
                    freq[S[l]-'0']--;
                    l++;
                }
                r++;
            }
            cout<<ans<<"\n";
        } else {
            cout<< 0 << "\n";
        }
    }
    return 0;
}