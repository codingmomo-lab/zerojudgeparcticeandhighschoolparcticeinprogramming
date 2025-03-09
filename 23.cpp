#include<iostream>
using namespace std;

int main(){
int i=0;
int j=2;
int a[5][5]={0};
a[i][j]=1;
          for(int n=2;n<=25;n++){
          	   
          	i--;
			  if(i<0){
			  	i=i+5;
			  }
          	
          	j++;
          	  if(j>4){
          		j=j-5;
			  }
			 
          	      	
          	
			  
			  if(a[i][j]!=0){
			  	i=i+2;
			  	j=j-1;
			  	if(i>4){
			  		i=i-5;
				  }
				  
				  if(j<0){
				  	j=j+5 ;
				  }
			  }
			  
			  a[i][j]=n;
		  }
for(int b=0;b<5;b++){
	for(int c=0;c<5;c++){
		cout<<a[b][c]<<"\t";
		
	}
	cout<<endl;
} 




return 0;

}
