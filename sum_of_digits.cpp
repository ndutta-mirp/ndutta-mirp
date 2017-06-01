#include <iostream>
using namespace std;
int main() {
    int N,a; //number is initialised//
    int sum=0; // number of digits of N//
    cout<<"The number is"<<endl; 
    cin>>N;
    while(N>0){
        a=N%10;
        N/=10;
        sum=sum+a;
    }
    cout<<"Sum of digits="<<sum<<endl;
return 0;
}
