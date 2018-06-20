#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int matrix[10][10];
void printLcs(string &str1,string &str2, int m,int n);

int lcs(string &str1,string &str2 ,int m , int n ){	 
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
 printLcs(str1,str2,m,n);
 return matrix[m][n];
 }

  
void printLcs(string &str1,string &str2, int m,int n){
	string str=" ";
	while((m!=-1)&&(n!=-1)){
		if(str1[m]==str2[n]){
	    	cout << str1[m]<< " ";
            	str=str1[m]+str;
		m--;
		n--;
        }
       else{
	  if(matrix[m-1][n]>matrix[m][n-1])
                m--;
	   else
	        n--;      
	   }
   }
cout << str;
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
