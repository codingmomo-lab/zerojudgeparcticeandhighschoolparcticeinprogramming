#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){	
	if(n==0){
		break;
	}
	int x[n][n];
	int A[n]={0};
	int B[n]={0};
	int EA,EB,Ber=0, Aer=0;
	
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			cin>>x[i][j];
		}
		
	}
		for(int j=0;j<n;j++){
	 	   for(int i=0;i<n;i++){
	 	   	
	 	   	
	 	   	if(x[i][j]==1){
	 	   		A[j]++;
	 	   		B[i]++;
				}
	}
}
	for(int j=0;j<n;j++){
		
		if(A[j]%2!=0){
			EA=j;
			Aer++;
		}
		
	}
	
	for(int i=0;i<n;i++){
		
		if(B[i]%2!=0){
			EB=i;
			Ber++;
		}
		
	}
	if(Aer==0&&Ber==0){
		cout<<"OK"<<endl;
	}else if(Aer==1 && Ber==1){
		cout<<"Change bit ("<<EA+1<<","<<EB+1<<")"<<endl;
	}else{
		cout<<"Corrupt"<<endl;
	}
	}
	 
	return 0;
}
