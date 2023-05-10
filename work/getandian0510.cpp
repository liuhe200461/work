#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int a[n][n];
	int max_index[n];
	int min_index[n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++){
		int max=a[i][0];
	    max_index[i]=0;
	    for(j=1;j<n;j++){
		    if(a[i][j]>max){
			    max=a[i][j];
			    max_index[i]=j;
		    }
 	    }
	}
	for(j=0;j<n;j++){
		int min=a[0][j];
		min_index[j]=0;
		for(i=1;i<n;i++){
			if(a[i][j]<min){
				min=a[i][j];
				min_index[j]=i;
			}
		}
	}
	for(i=0;i<n;i++){
		if(min_index[max_index[i]]==i){
			cout<<i<<" "<<max_index[i];
		}
	}
	return 0;
} 
