#include <iostream>
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;
for(int i=10;i<100;i++){
	if(i%3==a&&i%5==b&&i%7==c){
		cout<<i;
		break;
	}else if(i==99){
		cout<<"No answer";
	}
}
	return 0;
}


