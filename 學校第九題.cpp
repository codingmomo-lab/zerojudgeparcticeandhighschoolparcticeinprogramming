#include <iostream>
using namespace std;

int main(){
int a[10];
int height;
int stool;
int apple=0;
for(int i=0;i<10;i++){
	cin>>a[i];
} 
cin>>height;
cin>>stool;
for(int i=0;i<10;i++){
	if(a[i]<=height+stool){
		apple=apple+1;
	}
}
cout<<apple;
	return 0;
}


