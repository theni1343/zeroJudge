#include <iostream>
using namespace std;
int main(int argc, char** argv) {

	int input,result;


while(cin>>input){

for(int i=2;i<=input;i++){
	int count=0;

while(input%i==0){
input=input/i;
count++;

}

if(count>1&&input!=1)
cout<<i<<"^"<<count<<" * ";

if(count>1&&input==1)
cout<<i<<"^"<<count;

if(count==1&&input==1)
cout<<i;

if(count==1&&input!=1)
cout<<i<<" * ";

}
cout<<endl;
}

}
