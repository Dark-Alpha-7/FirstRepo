#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
    cout<<"Enter size of matrix: "<<"\n";
    cin>>n;
    int arr[n][n];
    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"----------"<<"\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr1[i][j]=arr[j][i];
        }
    }
    cout<<"----------"<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<"  ";
        }
        cout<<"\n";
    }





	    
	
	// your code goes here
	return 0;
}



