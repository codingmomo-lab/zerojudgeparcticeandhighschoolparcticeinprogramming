#include<iostream>
using namespace std;
int main(){
	int A1,B1,C1,A2,B2,C2,n;
	int profit1,profit2;

	
	
	cin>>A1>>B1>>C1;
	cin>>A2>>B2>>C2;
	cin>>n;
	int max=-2000000;
	int storage;
	for(int i=0;i<=n;i++){
		profit1=A1*i*i+B1*i+C1;
	
		
		profit2=A2*(n-i)*(n-i)+B2*(n-i)+C2;
		
		
		storage=profit1+profit2;
		
		
		
		if(storage>max){
		    max=storage;
		}
		
}
		
	
	
	
	cout<<max;
	
	return 0;
}
