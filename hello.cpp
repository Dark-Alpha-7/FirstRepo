#include <bits/stdc++.h>
using namespace std;

int main() {


    long a,b,temp=0;
    cin>>a>>b;

    while(a!=b){

    if(a>b){
        a=a-b;
        temp++;
    }
    else if(b>a){
        b = b-a;
        temp++;
    }

    }
	cout<<temp<<endl;
	 
	    
	// }
	// your code goes here
	return 0;
}



