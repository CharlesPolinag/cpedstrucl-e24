#include <iostream>
using namespace std;

void selection(){
	
	int A[] = {30, 40, 20, 50, 10};
	int i, j, n;
	
	for(int i=0; i<5; i++){
		
		int min = A[i], index = i;
		for(int j=i+1; j<5; j++){
			if(A[j] < min){
				min = A[j];
				index = j;
			}
		}
		A[index] = A[i];
		A[i] = min; 
		for(n=0;n<5;++n){
			cout<<" "<<A[n];
		}  
		cout<<endl<<endl;
	}
}

int main(){
	selection();
}
