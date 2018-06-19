#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string str1,string str2,string str3,int l1,int l2,int l3){
  int matrix[l1+1][l2+1][l3+1];
  for(int i=0;i<=l1;i++){
	  	for(int j=0;j<=l2;j++){
		  	for(int k=0;k<=l3;k++){
			  	if((i==0)||(j==0)||(k==0))
				  	matrix[i][j][k]=0;
				  else if((str1[i-1]==str2[j-1])&&(str2[j-1]==str3[k-1]))
 					  matrix[i][j][k]=1+matrix[i-1][j-1][k-1];
				  else 
					  matrix[i][j][k]=max(max(matrix[i-1][j][k],matrix[i][j-1][k]),matrix[i][j][k-1]);
	        }		
	    	}
	    }
 return matrix[l1][l2][l3];
}

int  main(){
	string str1,str2,str3;
	cout << "ENTER THE STRING "<< endl;
	getline(cin,str1);
	getline(cin,str2);
	getline(cin,str3);
	int l1=str1.length();
	int l2=str2.length();
	int l3=str3.length();
	int length=lcs(str1,str2,str3,l1,l2,l3)	;
	cout << "THE MAXIMUM LENGTH COMMON STRING "<<length<< endl;
	return 0;
}
