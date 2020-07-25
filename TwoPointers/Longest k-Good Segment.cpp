#include<bits/stdc++.h>
using namespace std;
 
int n,k,c,arr[500005],l,r,diff,ans,freq[1000005];
 
int diff_num(int l , int r){
    c = 0;
    for(int i = l ; i<=r;i++){
        if(freq[i]>0)c++;
    }
    return c;
}
 
int main(){
    scanf("%d%d",&n,&k);
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int l_ans = 0 , r_ans = 0;
    r = 0 , l = 0 ,ans = 0,diff= 0;
    while(r!=n){
        freq[arr[r]]++;
        if(freq[arr[r]]==1)c++;
        if(c<=k){
            ans = max(ans,r-l+1);
            if (ans == r-l+1){
                r_ans = r+1;
                l_ans = l+1;
            }
        }
        while(c>k){
            freq[arr[l]]--;
            if (freq[arr[l]] ==0) c--;
            l++;
        }
    r++;
 
    }
    cout<<l_ans<<" "<<r_ans;
}