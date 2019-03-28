#include <iostream>

using namespace std;

int main()
{
int a,b,c,d,e,t,i;
cin>>t;
for(i=0;i<t;i++){
cin>>a>>b>>c>>d;
if(b-a == c-b){
e=d+b-a;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
else{
e=d*b/a;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
}
    return 0;
}
