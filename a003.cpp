#include <iostream>

using namespace std;

int main()
{
    int M,D,S;
    while(cin>>M>>D){
    S=(M*2+D)%3;
    if(S=0)
    cout<<"´¶³q"<<endl;
    if(S=1)
    cout<<"¦N"<<endl;
    if(S=2)
    cout<<"¤j¦N"<<endl;
    }
    return 0;
}

