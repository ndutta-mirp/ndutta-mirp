#include<iostream>
using namespace std;
int main() {
	int a,b,c,d;
	cout<< "Enter 4 numbers" <<endl;
	cin>>a>>b>>c>>d;
	if (((a>b) && (a>c)) && (a>d)){
	cout<< " Largest No.-"<<a<<endl;
	      if ((b>c) && (b>d))
	      cout<< " 2nd Largest No.-"<<b<<endl;
	      else if ((c>b) && (c>d))
	      cout<< " 2nd Largest No.-"<<c<<endl;
	      else if ((d>b) && (d>c))
	      cout<< " 2nd Largest No.-"<<d<<endl;
	}
	if (((b>a) && (b>c)) && (b>d)){
	cout<< "Largest No.-"<<b<<endl;
	      if ((a>c) && (a>d))
	      cout<< " 2nd Largest No.-"<<a<<endl;
	      else if ((c>a) && (c>d))
	      cout<< " 2nd Largest No.-"<<c<<endl;
	      else if ((d>a) && (d>c))
	      cout<< " 2nd Largest No.-"<<d<<endl;
	}
	if (((c>b) && (c>a)) && (c>d)){
	cout<< "Largest No.-"<<c<<endl;
	      if ((b>a) && (b>d))
	      cout<< " 2nd Largest No.-"<<b<<endl;
	      else if ((a>b) && (a>d))
	      cout<< " 2nd Largest No.-"<<a<<endl;
	      else if ((d>b) && (d>c))
	      cout<< " 2nd Largest No.-"<<d<<endl;
	}
	if (((d>b) && (d>c)) && (d>a)){
	cout<< "Largest No.-"<<a<<endl;
	      if ((b>c) && (b>a))
	      cout<< " 2nd Largest No.-"<<b<<endl;
	      else if ((c>b) && (c>a))
	      cout<< " 2nd Largest No.-"<<c<<endl;
	      else if ((a>b) && (a>c))
	      cout<< " 2nd Largest No.-"<<a<<endl;
	}
	return 0;
}

