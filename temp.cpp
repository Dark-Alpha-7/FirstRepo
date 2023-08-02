#include <bits/stdc++.h>
using namespace std;

int main() {
    // int t;
	// cin >> t;
	// while(t--){
  string s;
  int temp,temp2,temp3,temp4;
  bool flag=false,flag2=false;
  cin>>s;
  for(int i=0;i<8;i++){
  if(s[i] == 'B'){
	temp=i;
	break;
  }
  
  }
  for(int i=temp+1;i<8;i++){
	if(s[i] == 'B'){
		temp2=i;
		break;
	}
	
  }


  if(temp%2 != temp2%2){
	flag=true;
  }

  for(int i=0;i<8;i++){
  if(s[i] == 'R'){
	temp3=i;
	break;
  }
  
  }

  for(int i=temp3+1;i<8;i++){
	if(s[i] == 'R'){
		temp4=i;
		break;
	}
	
  }

  if(s[temp4-temp3] == 'K'){
	flag2=true;
  }

  if(flag == true && flag2 == true){
	cout<<"Yes"<<endl;
  }
  else{
	cout<<"No"<<endl;
  }



    
	    
	    
	 
	    
	// }
	// your code goes here
	return 0;
}
