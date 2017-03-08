#include <iostream>
using namespace std;

void bubble(){
	
	int A[] = {35, 10, 55, 20, 5};
	int i, j, n, swap;
	
	for(int i=5; i>1; i--){
		for(int j=0; j<i-1; j++){
			if(A[j] > A[j+1]){
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;	
			}
		}
		for(n=0;n<5;++n){
			cout<<" "<<A[n];
		}  
		cout<<endl<<endl;
	} 
} 

int main(){
	bubble();
}
