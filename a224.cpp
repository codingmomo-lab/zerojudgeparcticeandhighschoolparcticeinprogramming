#include<iostream>
using namespace std;

 int add(int d,int e)//加法 
  {    
    return d+e;
  }
 int sub(int d,int e)//減法 
  {    
    return d-e;
  }
  int mul(int d,int e)//乘法 
  {    
    return d*e;
  }
  int QAQ(int d,int e)//除法 
  {    
    int interge=0;
	interge=d/e;
    return interge;
  }
  
  int main(){
  	long long int a,b,c,line;
  	cin>>line;
  	
  	int ans[4];
  	  for(int i=0;i<line;i++){
  	  	cin>>a>>b>>c;
  	  	if(a==1){
  	  		ans[i]=add(b,c);
			}
		if(a==2){
			ans[i]=sub(b,c);
			}
		if(a==3){
			ans[i]=mul(b,c);
			}
		if(a==4){
			ans[i]=QAQ(b,c);
		}
		
		}
		for(int i=0;i<line;i++){
			cout<<ans[i]<<endl; 
		}
  
  
  
  
  
  

return 0;
}
