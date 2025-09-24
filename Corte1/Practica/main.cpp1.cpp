#include <iostream>
using namespace std;

int restar(int a, int b){
	int r=a-b;
	return r;
}

int sumar(int m, int n){
	int t=m+n;
	return t;
}

int multiplicar(int x, int y){
	int w=x*y;
	return w;
}


int main(){
	int h=restar(36, 4);
	int t=sumar(23, 27);
	int w=multiplicar(20, 5);

	cout<<h<<endl;
	cout<<t<<endl;
	cout<<w<<endl;
}    
