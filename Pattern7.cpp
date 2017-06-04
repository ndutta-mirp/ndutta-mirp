#include<iostream>
using namespace std;
int main(){
    int n,f=0,a;
    cout<<"Enter a number=";
    cin>>n;
    for (int i=1;i<=n;i++){
        a=n%i;
        if(a==0) {
        cout<<i;
        cout<<" ";
        }
    }
    return 0;
}
    
 
