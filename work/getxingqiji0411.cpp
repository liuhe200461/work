#include <iostream>
#include <string.h>
using namespace std;
class xingqiji{
	private:
		int x=1900;
		int y=1;
		int z=1;
		char str[10];
		int a[8];
		int x1,y1,z1;
		int s;
	public:
		void riqi(char str[10]){
			strcpy(this->str,str);
		}
		void shuru(char str[10]){
			a[0]=str[0];
			a[1]=str[1];
			a[2]=str[2];
			a[3]=str[3];
			a[4]=str[5];
			a[5]=str[6];
			a[6]=str[8];
			a[7]=str[9];
			x1=1000*a[0]+100*a[1]+10*a[2]+a[3];
			y1=10*a[4]+a[5];
			z1=10*a[6]+a[7];
		}
	    void tianshu(){
		int cx,cy,cz;
		cx=x1-x;
		cy=y1-y;
		cz=z1;
		int sx,sy,sz;
		sx=cx/4+cx*365-1;
		if(cy==1){
			sy=31;
		}else if(cy==2){
			sy=59;
		}else if(cy==3){
			sy=90;
		}else if(cy==4){
			sy=120;
		}else if(cy==5){
			sy=151;
		}else if(cy==6){
			sy=181;
		}else if(cy==7){
			sy=212;
		}else if(cy==8){
			sy=243;
		}else if(cy==9){
			sy=273;
		}else if(cy==10){
			sy=304;
		}else if(cy==11){
			sy=334;
		}
		sz=z1;
		if(x1!=1900 && x1%4==0 && cy>1){
			s=sx+sy+sz+1;
		}else{
			s=sx+sy+sz;
		}
	    }
		void getxingqiji(){
			int k;
			k=s%7;
			if(k==0){
				cout<<"Monday";
			}else if(k==1){
				cout<<"Tuesday";
			}else if(k==2){
				cout<<"Wednesday";
			}else if(k==3){
				cout<<"Thursday";
			}else if(k==4){
				cout<<"Friday";
			}else if(k==5){
				cout<<"Saturday";
			}else if(k==6){
				cout<<"Sunday";
			}
		}	
};
int main(){
	char str[10];
	xingqiji kk;
	cin>>str;
	kk.riqi(str);
	kk.shuru(str);
	kk.tianshu();
	kk.getxingqiji();
	return 0;
}
