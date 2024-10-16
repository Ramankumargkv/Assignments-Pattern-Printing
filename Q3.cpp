#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the No of Row = ";
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i;j++){
            cout<<char(int(j+65));
        }
        cout<<endl;
    }
}