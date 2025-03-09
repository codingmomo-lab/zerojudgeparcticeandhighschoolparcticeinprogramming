#include<iostream>
using namespace std;
int main(){
	int line;
	cin>>line;
	int score[line];
	
	for(int i=0;i<line;i++)
	{
		cin>>score[i];
	}
	for(int i=0;i<line;i++)
	{
	   for(int j=0;j<i;j++)
	   {
	   	if(score[j]>=score[i])//成績排序 
	   	   {
		    int x;
	   	   x=score[j];
	   	   score[j]=score[i];
	   	   score[i]=x;
		   }
		}
	}
	for(int i=0;i<line;i++)
	{
		cout<<score[i]<<" ";
	}
	
	cout<<endl;
	for(int i=0;i<line;i++){
	
	if(score[i]<60)//有沒有及格 
	{
		cout<<score[i];
	    break;
	}else
	{
		cout<<"best case";//最好的成績 
	   break;
	}
}
cout<<endl;
   for(int i=0;i<line;i++){
	
	if(score[i]>=60)
	{
		cout<<score[i];
	    break;
	}else
	{
		cout<<"worst case";//最差的成績 
	   break;
	}
}
	
	
	

	return 0;
} 
