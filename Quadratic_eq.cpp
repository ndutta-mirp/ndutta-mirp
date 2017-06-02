#include <iostream> 
using namespace std;
int main()
{
 int a, b, c, x1, x2, d, r, i;
 
 cout<<"Enter the co-efficients: a , b , c:";
 cin>> a >> b >> c ;
 d=b*b-4*a*c ;

 if(d>0)
 { cout<< "Roots are real"<<endl;
   
  x1= (-b+sqrt(d))/2*a;
  x2= (-b-sqrt(d))/2*a

 cout<< "x1 =" << a <<"x2 =" << b;}
 
 else if(d=0)
 { cout<< "Roots are equal and real"<<endl;
   x1= -b/2*a;
 
  cout<< "a ="<<"b ="<< a;
 }

 else
 { r= -b/2*a;
   i= sqrt(-d)/2*a;

   cout<< "Roots are imaginary"<<endl;
   cout<<  "real part:" << r;
    
   x1=
   cout<< "imaginary part:"<< i;
   cout<< "x1"
  
  
 
  
