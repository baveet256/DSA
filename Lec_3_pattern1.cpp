#include<iostream>
using namespace std;
int main(){
    cout<<"give n value";
    int n;cin>>n;
    for(int j = n;j>=1;j--){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
return 0;
}