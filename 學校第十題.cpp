#include <iostream>
using namespace std;

int main(){
int fib[10000],N;
cin>>N;
fib[0]=1;
fib[1]=1;
for(int i=0;i<N;i++){
	fib[i+2]=fib[i+1]+fib[i];
} 
for(int i=0;i<N;i++){
cout<<fib[i]<<" "; 
}
	return 0;
}


