#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enetr the No of Row = ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<i+1;j++){
            if(i%2==0){
                cout<<char(int(j+64));
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
}