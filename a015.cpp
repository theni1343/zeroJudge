#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char** argv) {

int arr['x']['y'];
int x,y;
while(cin>>x>>y){
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
cin>>arr[i][j];
}
}
for(int i=0;i<y;i++){
for(int j=0;j<x;j++){
cout<<arr[j][i]<<" ";
}
cout<<endl;
}
}

return 0;
}
