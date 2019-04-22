#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c;

    while(cin>>a>>b){
    if(a>b){
    c=a-b;
    cout<<c<<endl;}
    if(a==b){
    cout<<"0"<<endl;}
    if(a<b){
    c=b-a;
    cout<<c<<endl;}
    }
    return 0;
}
