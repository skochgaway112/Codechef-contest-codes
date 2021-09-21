#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void jaishreeram(){
    ll i;
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    ll q;
    cin>>q;
    bool ash=true;
    while(q--){
        unordered_map<ll,ll> m1;
        
        char ch;
        cin>>ch;
        ll k;
        cin>>k;
        ll count=0;
        if(ch=='+'){
             count++;
             m1[k]++;
        }else{
            count--;
            m1[k]--;
        }
        if(m1[k]<0){
             ash=false;
        }if(count>m){
            ash=false;
        }
        
    }
    if(ash=false){
            cout<<"Inconsistent"<<endl;
        }else{
           cout<<"Consistent"<<endl;
        }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        jaishreeram();
    }
    return 0;
}