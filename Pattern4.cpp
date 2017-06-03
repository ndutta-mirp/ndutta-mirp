#include<iostream>
using namespace std;
int main() {
    int R,C;
    cout<<"Enter no. of rows=";
    cin>>R;
    cout<<"Enter no. of columns=";
    cin>>C;
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    return 0;
}



