#include<iostream>
using namespace std;

int main() 
{ 
	int a,b,c, marks, max=100;
	cout<< "Enter cutoff for A-Grade-" <<endl;
        cin>>a;
	cout<< "Enter cutoff for B-Grade-" <<endl;
        cin>>b;
	cout<< "Enter cutoff for C-Grade-" <<endl;
        cin>>c;
	
	cout<< "Enter marks for student-" << endl;
	cin>>marks;
	
 	if (a>b&&b>c){
	  cout<< "Cutoff valid" <<endl;
	 
	  if (marks<=max && marks>a)
	     cout<< "A-grade" << endl;
          else if (marks<=max && marks>b)
	     cout<< "B-grade" << endl;
          else if (marks<=max && marks>c)
	     cout<< "C-grade" << endl;
          else 
	     cout<< "fail" <<endl;
          }
	
 	else 
	  cout<< "Cutoff invalid" <<endl;	
	return 0;
}
