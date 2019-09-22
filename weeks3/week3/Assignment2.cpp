#include <iostream>


int main(){

	char b[] ="ABC";
   const char * a ="ABC";



// b[0]= 'b';
   
   a[0]='b';

	std::cout << b << std ::endl;
	std::cout << a << std ::endl;

}
