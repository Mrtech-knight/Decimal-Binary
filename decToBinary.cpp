#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a num : ";
    cin>>n;
    int j=0;
    int ans=0;

    while(n!=0){
        int bits=n&1;
        ans=(bits*pow(10,j))+ans;
        n=n>>1;
        j++;
    }
    cout <<" Answer is "<<ans<<endl;
}