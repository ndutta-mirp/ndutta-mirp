#include<iostream>
using namespace std;
int main()
{
  int N;
  cout<<"Enter a number"<<endl;
  cin>>N;
  for (int i=1;i<=N;i++){
     for (int a=1;a<=(N-i);a++) {
       cout<<"*";
     }
     for(int j=1;j<=i;j++){
	    cout<<i;
     }
     cout<<endl;
  }   
  return 0;
}
