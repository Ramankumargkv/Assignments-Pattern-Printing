#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of Row = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
            }
            for(int j=1;j<=i;j++){
                cout<<" *";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
            }
            for(int j=n-1;j>=i;j--){
                cout<<" *";
        }
        cout<<endl;
    }
    
    
}