#include<iostream>
using namespace std;
int main(){
    int x[5]={100,2,3,4,5};
    for(int i=0;i<5;i++){
    cout<<x[i]<<" ";
}
cout<<endl;
    char name[50]="my_name";
    for(int k=0;name[k]!='\0';k++){
	cout<<name[k];
}
cout<<endl;
char name1[50];
    cout<<"Enter first name=";
    cin>>name1;
    for(int j=0;name1[j]!='\0';j++){
    cout<<name1[j];
}
cout<<" "<<endl;
    return 0;
}
