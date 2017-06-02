#include<iostream>
using namespace std;
int main()
{
  int N,b;
  cout<<"Enter a number"<<endl;
  cin>>N;
  for (int i=1;i<N;i++){
     for (int a=1;a<=(N-i);a++) {
       cout<<"*";
     }
	}
	cout<<""<<endl;
         for(int j=N;j<=(N-j+1);j--){
         b=(N-j+1);
         cout<<b<<endl;
  }
  return 0;
}
