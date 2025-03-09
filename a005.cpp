#include<iostream>
using namespace std;
int main (){
	int t;//數列的數目
	   cin>>t;
	int line[t][5];
	int dif=0;//差值
	int mid=0;//乘數 
	  for(int s=0;s<t;s++)
	  {
	     for(int i=0;i<4;i++)
		 {
	       cin>>line[s][i];
	   	} 
	   	if((line[s][1]-line[s][0])==(line[s][2]-line[s][1]))
	   	   {
	   	   	dif=line[s][1]-line[s][0];
	   		line[s][4]=line[s][3]+dif;
		   }
		   else
		   {
		   	mid=line[s][1]/line[s][0];
		   	line[s][4]=line[s][3]*mid;
		   }
		   
      }
      for(int s=0;s<t;s++){
      for(int i=0;i<5;i++){
		cout<<line[s][i]<<" ";   
}
cout<<endl;
}
 return 0;
}
