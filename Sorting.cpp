#include<iostream>
using namespace std;
int main() {
    int N,t,i;
    cout<<"Enter the number of numbers"<<endl;
    cin>>N;
    int arr[N];
    for(i=1;i<=N;i++){
        cout<<"Enter a number= ";
        cin>>arr[i];
    }
    for(i=1;i<N;i++){
        for(int j=1;j<=(N-i);j++){
            if(arr[j]>arr[j+1]){
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            }
        }
    }
    cout<<"Sorted Array"<<endl;
    for(i=1;i<=N;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
