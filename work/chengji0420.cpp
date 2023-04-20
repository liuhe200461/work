#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>89&&n<101){
		cout<<"A";
	}else if(n>79&&n<90){
		cout<<"B";
	}else if(n>69&&n<80){
		cout<<"C";
	}else if(n>59&&n<70){
		cout<<"D";
	}else if(n>-1&&n<60){
		cout<<"E";
	}
	return 0;
} 
