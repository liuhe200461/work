#include <iostream>
#include <iomanip>
using namespace std;
class getpandf{
	private:
		int n;
		int i;
		int j;
		int t;
	public:
		void shuru(int n){
		}
	    void pingjunzhi(){
	    	int a[n][6];
	    	int s[n]={0};
	    	for(int i=0;i<n;i++){
	    		for(int j=0;j<6;j++){
	    			s[i]=s[i]+a[i][j];
				}
			}
			float p[n];
			for(int t=0;t<n;t++){
				p[t]=s[t]/6;
			}
		}
		void fangcha(){
			float p[n];
			int a[n][6];
			float fc[n];
			float sf[n]={0};
			for(i=0;i<n;i++){
				for(j=0;j<6;j++){
					sf[i]=sf[i]+(p[i]-a[i][j])*(p[i]-a[i][j]);
				}
			}
			for(t=0;t<n;t++){
				fc[t]=sf[t]/6;
			}
		}
		void shuchu(){
			int p[n];
			int fc[n];
			for(i=0;i<n;i++){
				cout<<p[i]<<' '<<fc[i]<<endl;
			}
		}
}; 
int main(){
	int n;
	int i;
	int j;
	cin>>n;
	int a[n][6];
	for(i=0;i<n;i++){
		for(j=0;j<6;j++){
			cin>>a[i][j];
		}
	}
	getpandf kk;
	kk.shuchu();
	kk.pingjunzhi();
	kk.fangcha();
	kk.shuchu();
	return 0;
}
