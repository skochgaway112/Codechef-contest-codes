#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void jaishreeram(){
     ll i;
     ll n;
     cin>>n;
     vector<ll> v1;
     for(i=0;i<n;i++){
         ll x;
         cin>>x;
         v1.push_back(x);
     }
     
     ll final1=0;
       final1=*max_element(v1.begin(),v1.end());
       ll final2=0;
       for(i=0;i<v1.size();i++){
           if(v1[i]==final1){
                 final2=i;
           }
       } 
       if(v1.size()>2){
       ll final3=0;
       final3=final1*v1[final2-1];
       ll final4=0;
       final4=final1*v1[final2+1];
       if(final3>=final4){
           cout<<final3<<endl;
       }else if(final3<final4){
               cout<<final4<<endl;
       }
       }else{
        cout<<final1*final1<<endl;   
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