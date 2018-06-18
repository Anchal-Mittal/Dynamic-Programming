#include<iostream>
using namespace std;
# define NIL -1
int lockup[20];

int lockuptable(int num){
	for(int i=0;i<=num;i++){
		lockup[i]=NIL;
	}
}

int fib(int num){
	if(lockup[num]==NIL){
		if(num<=1)
		   lockup[num]=num;
		else
		lockup[num]=fib(num-1)+ fib(num-2);
	  }
	 
	 
	  return lockup[num] ;
}
int main(){
	cout << "Enter the number "<< endl;
	int num;
	cin>> num;
	lockuptable(num);
	cout <<fib(num);
	
	
return 0;	
}
