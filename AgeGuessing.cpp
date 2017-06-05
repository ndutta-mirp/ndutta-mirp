#include<iostream>
using namespace std;
int main(){
	int min=0,max=120;\
	int mid,response;
	cout<<"If true, type 1"<<endl;
	cout<<"If false, type 0"<<endl;
	while(max-min>1){
		mid=(min+max)/2;
		cout<<"Is your age less than ";
		cout<<mid<<endl;
		cin>>response;
		if(response==1)
		   max=mid;
		else
		   min=mid;
	}
	cout<<"Age is:"<<min<<endl;
	return 0;
}
