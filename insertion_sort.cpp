#include<iostream>
using namespace std;

int main(){
	int j, burp(1);
	int A[]={40,30,20,50,10};
	
	for(int i=1;i<5;i++){
		int tmp=A[i];
		for(j=i-1;j>=0 && tmp<A[j];j--){
			A[j+1] = A[j];
		}
		A[j+1] = tmp;
			
			cout<<"\nPass "<<++burp<<endl;
			for(int f=0;f<5;++f)
			cout<<"   "<<A[f];
	}
	
}
