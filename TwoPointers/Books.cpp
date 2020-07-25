#include<bits/stdc++.h>
using namespace std;
 
int n ,t, arr[100001],l,r,sum,books;
 
int main(){
    cin>>n>>t;
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    int ans = 0;
    while(r!=n){
        sum+=arr[r];
        if(sum<=t){
            ans=max(r-l+1,ans);
        }
        else{
            l++;
            sum-=arr[l-1];
        }
        r++;
    }
    cout<<ans;
}