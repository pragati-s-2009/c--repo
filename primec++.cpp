#include<iostream>

using namespace std;
int main(){
	
int n;
	cout<<"enter no:";
	cin>>n;
	cout<<endl;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"no is composite and is divisible by"<<i;
			return 0;
		}
	}
	
		if(n>1){
			cout<<"prime no";
		}
	
	return 0;
	}



