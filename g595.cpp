#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int h[n];
    int mix=0;
    for(int i=0;i<n;i++){

        cin>>h[i];



    }
    for(int z=0;z<n;z++){
    if(h[z]==0){
	    if(h[z-1]<h[z+1]){//�e�@�����@���p 
	    h[z]=h[z-1];//���ܦ��e�@�� 
	    mix=mix+h[z];
	    }else{//�p�G�e�@�V���@�V�j 
            h[z]=h[z+1];
            mix=mix+h[z];
	    	
}
    }
    }
    
    
     cout<<mix;
    return 0;
}

