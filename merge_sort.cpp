#include<iostream>
using namespace std;

int main(){
	int numArr[8]={6,5,3,1,8,7,2,4};
	int tmp[8];
	int n=8, l1, k, h1, l2, h2, i, j, count=1;
	for(int l=0;l<n;l++)
		cout<<numArr[l]<<" ";
	cout<<"\n\n";	
	for(int size=1; size < n; size=size*2){	
		l1 = 0;
		k = 0;
		while( l1+size < n){
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if(h2>=n)
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1 && j<=h2 ){
				if ( numArr[i] <= numArr[ j] )
					tmp[k++]=numArr[i++];
				else
					tmp[k++]=numArr[j++];
			}	
			while(i<=h1)
				tmp[k++]=numArr[i++];
			while(j<=h2)
				tmp[k++]=numArr[j++];
				
			l1 = h2+1;		
		}
		for(i=l1; k<n; i++)
			tmp[k++]=numArr[i];
		for(i=0;i<n;i++)
			numArr[i]=tmp[i];	
		
		cout<<"Pass "<<count<<":\n";		
		for(int l=0;l<n;l++)
			cout<<numArr[l]<<" ";
		cout<<"\n";
		count++;			
	}
}
