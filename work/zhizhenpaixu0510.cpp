#include<iostream>
using namespace std;
class Sort{
    public:
        void sortArray(int n,int num[]){
            int i,j,k;
            for(i=0;i<n;i++){
                for(j=0;j<n-i-1;j++){
                    if(num[j]>num[j+1]){
                        k=num[j];
                        num[j]=num[j+1];
                        num[j+1]=k;
                    }
                }
                j=0;
            }
        }
}; 
int main(){
    int n,i;
    cin>>n;
    int num[n];
    for(i=0;i<n;i++){
        cin>>num[i];
    }
    Sort s;
    s.sortArray(n, num);
    for(i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}

