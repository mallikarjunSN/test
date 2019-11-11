#include <iostream>
using namespace std;

void swap(int *a,int *b){
	*a= *a + *b;
	*a= *a - *b;
	*b= *a - *b;
}

int main(){
	int a=4,b=5;
	printf("\nhello man");
	swap(&a,&b);
	return 0;
}

