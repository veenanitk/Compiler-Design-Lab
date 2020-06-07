#include<stdio.h>

int sum(int n){
	n=n + 100;
	return n;
}

int main(){

	for(int i=10;i<20;i++){
		printf("Sum is %d\n",sum(i));
	}
	//with function
}
