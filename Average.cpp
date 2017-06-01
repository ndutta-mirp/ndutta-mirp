#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double N, average=0,no;
	cout<<"Enter the number of numbers"<<endl;
	cin>>N;
    
	
	for (int i=1;i<=N;i++){
        cout<<"Enter the no.s"<<endl;
        cin>>no;
	average+=no;
	}
	cout<<"Average="<<average/N<<endl;
return 0;
}
	
