#include <iostream>
using namespace std;
int main(){
	int n,i=0,j=0;
	cin>>n;
	int a[n][2];
	int b[n][50];
    for(;i<n;i++){
    	for(;j<2;j++){
    		cin>>a[i][j];
		}
		j=0; 
	}
	for(i=0;i<n;i++){
		for(j=0;j<50;j++){
			b[i][j]=a[i][0]%a[i][1];
			a[i][0]=a[i][0]/a[i][1];
		}
		j=0;
	}
	for(i=0;i<n;i++){
		for(j=49;j>-1;j--){
		if(b[i][j]==0){
			continue;
		}else{
			cout<<b[i][j];
		}
	}
	cout<<endl;
	j=49;
	}
}
