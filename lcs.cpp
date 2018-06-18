#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int lcs(string str1,string str2 ,int m , int n ){
	if(m==0||n==0)
	  	return 0;
	else if(str1[m-1]==str2[n-1])
		return (1+lcs(str1,str2,m-1,n-1));
	else
		return(max(lcs(str1,str2,m-1,n),lcs(str1,str2,m,n-1)));
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
