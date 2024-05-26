#include<bits/stdc++.h>
using namespace std;











int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int flag=0;
        if(k==0){
            s += to_string(k);
            cout<<s<<endl;
            continue;
        }
        int pos=0;
        for(int i=0;i<n;i++){
            if(s[i]-'0' >=k){
                pos++;
            }
            else {
                break;
            }
        }
        s.insert(pos,to_string(k));
        cout<<s<<endl;  
                
        
        
    }
}