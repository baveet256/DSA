#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;

for(int i=n;i>=1;i--){
    for(int j=1;j<=n;j++){
    cout<<n-j+1<<" ";
    }
   cout<<endl;
 }
return 0;
}
// 321 321 321
//------------------------------------------------------------------------------------------------------
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
// 123 123 123
//--------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

int main(){
  int strt=0,end=0;
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    if(i==1)strt=1;
    else strt = end+1;
    for(int j=strt;j<=strt+n-1;j++){
        cout<<j<<" ";
        end=j;
    }
    cout<<endl;
  }
return 0;
}
//123 456 789
//====================================================================================================
#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    int j=i;
    while(j>=1){
        cout<<"*"<<" ";
        j--;
    }
    cout<<endl;
  }
return 0;
}
//* ** *** ****
//===================================================================================================
#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    int j=i;
    while(j>=1){
        cout<<i<<" ";
        j--;
    }
    cout<<endl;
  }
return 0;
}
// 1 22 333 4444
//============================================================================================================
#include<iostream>
using namespace std;
int main(){
    int count=1;
    int n;cin>>n;
    for(int i =1;i<=n;i++){
        int j=i;
        while(j>=1){
            cout<<count<<" ";
            count++;
            j--;
        }
        cout<<endl;
    }
return 0;
}
// 1 23 456 78910
//============================================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int j=1;
    int col=1;
    for(int i=1;i<=n;i++){
        int j=i;
        col=1;
        while(col<=i){
            cout<<j<<" ";
            j++;
            col++;
        }
        cout<<endl;
    }
return 0;
}
// 1 23 345 4567 56789
//==============================================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ // no variable logic, **observe that max at each row is one less than twice the row number.**
       for(int j=i;j<2*i;j++){
        cout<<j<<" ";
       }
        cout<<endl;
    }
return 0;
}
// 1 23 345 4567 56789 = no variable
//==============================================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=i;j>0;j--){
        cout<<j<<" ";
       }
        cout<<endl;
    }
return 0;
}
// 1 21 321 4321 // try with i-j+1 becuz reverse of i is n-i+1
//============================================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=1;j<=n;j++){
        cout<<char(i+64)<<" ";
       }
        cout<<endl;
    }
return 0;
}
// AAA BBB CCC character= i+65-1 or 'A'+i-1.
//===============================================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=1;j<=n;j++){
        cout<<char(j+64)<<" ";
       }
        cout<<endl;
    }
return 0;
}
// ABC ABC ABC 
//=================================================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int count=65;
    for(int i=1;i<=n;i++){ 
       for(int j=1;j<=n;j++){
        cout<<char(count)<<" ";
        count++;
       }
        cout<<endl;
    }
return 0;
}
// ABC DEF GHI
//========================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=i;j<n+i;j++){
        cout<<char(j+64)<<" ";
       }
        cout<<endl;
    }
return 0;
}
// ABC BCD CDE
//================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=1;j<=i;j++){
        cout<<char(65+i+j-2)<<" ";
       }
        cout<<endl;
    }
return 0;
}
// 'A'+i+j-2 logic derived from 'A'+row-1, but columns also changing so the formula is changed to counter that.
///===================================================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=1;j<=n-i;j++){
        cout<<" ";
       }
       for(int k=1;k<=i;k++){
        cout<<"*";
       }
        cout<<endl;
    }
return 0;
}
// triangle RHS
///=======================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i+1;k++){
        cout<<"*";
       } 
       for(int j=1;j<=i-1;j++){
        cout<<" ";
       }
        cout<<endl;
    }
return 0;
}
// triangular LHS
//========================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=1;j<=n-i;j++){
        cout<<" ";
       }
       for(int k=1;k<=i;k++){
        cout<<k; // Ascend
       }
       for(int k=i-1;k>=1;k--){
        cout<<k; // Descend
       }
        cout<<endl;
    }
return 0;
}
// 1 121 12321 1234321 
//========================================================
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){ 
       for(int j=1;j<=n-i+1;j++){
        cout<<j; // Ascend
       }
        for(int k=1;k<=2*(i-1);k++){
        cout<<"*"; // Star
            }
       for(int k=n-i+1;k>=1;k--){
        cout<<k; // Descend
       }
        cout<<endl;
    }
return 0;
}
// DABANGG Pattern - HW
//========================================================THE END=============================================================
