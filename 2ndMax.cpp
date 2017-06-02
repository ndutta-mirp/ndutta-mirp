#include<iostream>
using namespace std;
int main();
{
	int max=-2147483646,smax=-2147483647,N,n;
	cout<<"Enter the number of numbers"<<endl;
	cin>>n;
	for(int i=0;i<N;i++)
	 cout<<"Enter the number"<<endl;
	 cin>>n;
	 if(n>=smax && n<=max){
	 smax=number;
	}
	else if (n>=max){
	    smax=max;
	    max=number;
	}
	cout<<"Second Maximum"<<smax<<endl;
return 0;
}
	 
	  
