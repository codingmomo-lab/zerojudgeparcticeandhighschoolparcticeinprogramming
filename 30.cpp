#include<iostream>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int maze[N][M]={0};
	int storage[N+1][M+1]={0};
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>maze[i][j];
		}
	}
	
	storage[0][0]=maze[0][0]; 
	 for(int i=1;i<N;i++){
	 	storage[i][0]=storage[i-1][0]+maze[i][0];
	 }
	  for(int i=1;i<M;i++){
	 	storage[0][i]=storage[0][i-1]+maze[0][i];
	 }
	
	for(int i=1;i<N;i++){
		for(int j=1;j<M;j++){
			if(storage[i-1][j]>storage[i][j-1]){
				storage[i][j]=maze[i][j]+storage[i-1][j];
			}else{
				storage[i][j]=maze[i][j]+storage[i][j-1];
			}
		}
	}
	
	
	
	
	cout<<storage[N-1][M-1];
	
	
}
