#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a num : ";
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int bits=n&1;
        ans=(bits*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout <<" Answer is "<<ans<<endl;
}