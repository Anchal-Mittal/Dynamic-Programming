#include<iostream>
using namespace std;
int fib(int num){
	int fib[num+1];

	   fib[1]=1;

	   fib[0]=0;
	for(int i=2;i<=num;i++){
		fib[i]=fib[i-1]+fib[i-2];
	} 
return fib[num];	     
}
int main(){
	cout << "ENTER THE NUMBER "<< endl;
	int num;
	cin >> num;
	cout <<fib(num);
}
