#include<iostream>
using namespace std;
int main(){
    int n,f=0,a;
    cout<<"Enter a number=";
    cin>>n;
    for (int i=2;i<n;i++){
        a=n%i;
        if(a==0) {
        f=f+i;
        }
    }
    if(f==0)
    cout<<"Prime number"<<endl;
    else
    cout<<"Not Prime number"<<endl;
return 0;
}
