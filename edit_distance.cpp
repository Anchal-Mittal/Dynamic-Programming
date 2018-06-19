#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string str1,string str2,int l1,int l2){
	int matrix[l1+1][l2+1];
	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			if(i==0)
				matrix[i][j]=l2;
			else if(j==0)
				matrix[i][j]=l1;
				
			else if(str1[i-1]==str2[j-1])
				matrix[i][j]=lcs(str1,str2,i-1,j-1);
			else 
			matrix[i][j]=min(min(lcs(str1,str2,i-1,j-1),lcs(str1,str2,i-1,j)),lcs(str1,str2,i-1,j-1))+1;
			
		}
	}
	return matrix[l1][l2];
}
int  main(){
	string str1,str2,str3;
	cout << "ENTER THE STRING "<< endl;
	getline(cin,str1);
	getline(cin,str2);
	
	int l1=str1.length();
	int l2=str2.length();
	
	int length=lcs(str1,str2,l1,l2)	;
	cout << "THE EDIT DISTANCE IS "<<length<< endl;
	return 0;
}
