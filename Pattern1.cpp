// Example program
#include <iostream>

using namespace std;

int main()
{
    int N;
        cout<<"Enter the number: ";
        cin>>N;
        for(int i=1; i<=N; i++) {
            for(int a=1; a<=(N-i+1); a++) {
                cout<<"*";
            }
            cout << " " ;
            for(int j=i; j>=1; j--) {
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}
    
    
    


