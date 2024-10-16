#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr the No of Row = ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
        
    }
}