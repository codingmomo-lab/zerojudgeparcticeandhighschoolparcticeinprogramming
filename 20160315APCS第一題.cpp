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
	   	if(score[j]>=score[i])//���Z�Ƨ� 
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
	
	if(score[i]<60)//���S���ή� 
	{
		cout<<score[i];
	    break;
	}else
	{
		cout<<"best case";//�̦n�����Z 
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
		cout<<"worst case";//�̮t�����Z 
	   break;
	}
}
	
	
	

	return 0;
} 
