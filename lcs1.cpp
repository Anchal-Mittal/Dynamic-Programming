#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string &str1,string &str2 ,int m , int n ){
  int matrix[m+1][n+1];
  
  for(int i=0;i<=m;i++){
   	
	  for(int j=0;j<=n;j++){
  		
		if(i==0||j==0)
  		    matrix[i][j]=0;
	    
		else if(str1[i-1]==str2[j-1])
   	 	    matrix[i][j]=1+matrix[i-1][j-1];
   	  
        else
        	matrix[i][j]=max((matrix[i-1][j]),(matrix[i][j-1]));
       }
   }
return matrix[m][n];
}
	  
int main(){
	string str1;
	string str2;
	getline(cin,str1);
	getline(cin,str2);
	int m=str1.length();
	int n=str2.length();
	int length=lcs(str1,str2,m,n);
	cout << length << endl;
return 0;
}
