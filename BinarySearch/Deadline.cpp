#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
 
ll t , n , d, l , r , mid , ans;
 
bool check_x(int x){
    int days;
    if(d%(x+1)==0)days = d/(x+1);
    else days = (d/(x+1)) +1;
    days+=x;
    if(days<=n)return true;
    else return false;
}
 
int main(){
    fastIO;
    cin>>t;
    while(t--){
        cin>>n>>d;
        bool flag = false;
        l = 0 , r = n ,mid = (r+l)/2;
        while(l<=r){
            mid = (r+l)/2;
            if(check_x(mid)){
                flag = true;
                break;
            }
            else{
                l = mid + 1;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}