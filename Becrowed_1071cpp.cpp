#include<iostream>
using namespace std;

int main(){
	int X,Y,i,sum=0;
	cin>>X;
	cin>>Y;
	 if(X==Y){
			cout<<0<<endl;
		}
	else if (X>Y){
	for(i=Y+1;i<X;i++){
		if(i%2 != 0){
		sum=sum+i;
		}	
	}
	cout<<sum<<endl;
    }
    else{
    	for(i=X+1;i<Y;i++){
		if(i%2 != 0){
		sum=sum+i;
		cout<<sum<<endl;
		}
	}
	}
	return 0;
}
