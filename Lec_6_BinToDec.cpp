#include<iostream>
#include<math.h>
using namespace std;
int dectobin(int n){
    int i=0,ans=0;
    while(n!=0){
        int l = n&1;
        ans = (l*pow(10,i))+ ans;
        n>>=1;
        i++;
    }
    return ans;
}
int bintodec(int n){
    int i=0,ans=0;
    while(n!=0){
        int l = n%10;
        ans = (l*pow(2,i))+ ans;
        n/=10;
        i++;
    }
    return ans;

}
int main(){
    // negative number to binary

    // positive num to bin
    // bin 2's comp

    int n;cin>>n;
    int bin = dectobin(n);
    int dec = bintodec(n);
    bin+=1;
    // dec to bin
    cout<<"number bin "<<n<<"; Its Decimal "<<dec;
return 0;
}