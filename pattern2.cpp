#include<iostream>
using namespace std;
int main() {
	int N;
	cout<<"Enter a number"<<endl;
	cin>>N;
	for(int i=1;i<=N;i++){
	    cout<<""<<endl;
	   for(int a=1;a<=i;a++){
	   cout<<"*";
	   }
	}
return 0;
}
