#include<bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
long long int usb,ps,both,m,l,r,ans,cost,v;
string s;
pair<long long int,string>arr[300005];
int main(){
    fastIO;
    cin>>usb>>ps>>both;
    cin>>m;
    for(int i = 0 ; i<m ; i++){
        cin>>v>>s;
        arr[i] = make_pair(v,s);
    }
    sort(arr,arr+m);
    while(r!=m){
        if (arr[r].second == "USB" && usb>0){
            usb--;
            ans++;
            cost+=arr[r].first;
        }
        else if (arr[r].second == "PS/2" && ps>0){
            ps--;
            ans++;
            cost+=arr[r].first;
        }
        else if((arr[r].second == "PS/2" || arr[r].second == "USB") && both>0){
            both--;
            ans++;
            cost+=arr[r].first;
        }
        r++;
    }
    cout<<ans<<" "<<cost;
}