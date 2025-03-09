#include<iostream>
using namespace std;

int main(){
	int k=0;
	cin>>k;
int i=0;
int j=k/2;
int a[k][k]={0};
for(int b=0;b<k;b++){
	for(int c=0;c<k;c++){
		a[b][c]=0;
		
	}
	
} 

a[i][j]=1;
for(int n=2;n<=k*k;n++){

             i--;
			  if(i<0){
			  	i=i+k;
			  }
          	
          	j++;
          	  if(j>k-1){
          		j=j-k;
			  }
			  
			  
			  if(a[i][j]!=0){
			  	i=i+2;
			  	j=j-1;
			  	if(i>k-1){
			  		i=i-k;
				  }
				  
				  if(j<0){
				  	j=j+k;
				  }
				  
              }
            a[i][j]=n;

      }
for(int b=0;b<k;b++){
	for(int c=0;c<k;c++){
		cout<<a[b][c]<<"\t";
		
	}
	cout<<endl;
} 

return 0;
}
