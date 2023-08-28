#include <iostream>

using namespace std;

int main(){
	int a[]={23,6,84,39};
	int *b;
	
	b = a;
	
	for(int c=0;c<5;c++){
		cout<<"posicion: ["<<c<<"] "<<*b++;
	}
}

	
	



