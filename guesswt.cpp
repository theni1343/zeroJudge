#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int input;
	int password;
	int low=1,high=100;
	srand((unsigned)time(NULL));
	password=rand()%high+low;
    cout<<"Please enter number between 1~100"<<endl;
	while(cin>>input){
	if(input<password){
	cout<<"Larger!"<<endl;
	low=input;
	cout<<"Please enter number between"<<low<<"~"<<high<<endl;}
	if(input>password){
	cout<<"Smaller!"<<endl;
	high=input;
	cout<<"Please enter number between"<<low<<"~"<<high<<endl;}
	if(input==password){
	cout<<"NiceWork!";
	break;}
}
	return 0;
}
