#include<iostream>
#include<algorithm>
using namespace std;
void lis(int array[10],int size){
	int temp[size];
	for(int i=0;i<size;i++){
		temp[i]=1;
	}
	for(int i=1;i<size;i++){
		for(int j=0;j<=i-1;j++){
			if(array[j]<array[i])
			    if(temp[i]<(temp[j]+1))
			    temp[i]=temp[j]+1;
			}
	}
	int max=temp[0];
	for(int i=1;i<size;i++){
         if(max<temp[i])
		  	  max=temp[i];
			}
    cout << max;
}
int main(){
	int size,array[10];
	cout << "Enter the size of the series"<< endl;
	cin >> size;
	cout << "Enter the elements of the array "<< endl;
	for(int i=0;i<size;i++){
		cin>> array[i];  
	}
	lis(array,size);
return 0;
}
