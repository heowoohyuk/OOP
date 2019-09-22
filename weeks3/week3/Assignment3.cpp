#include <iostream>                                         


int main() {
	char target[] = "Heo Woohyuk";
	long b[060] ; 
	int a= 13;
	int i= 421;
	int *c = new int [301];
const char * copy = "is no no ";
char name= 'a';
	std::cout<<"target\t" << &target << std::endl;
	std::cout<<"target\t" << target << std::endl;
	std::cout<<"b\t" << &b << std::endl;
	std::cout<<"b\t" << b << std::endl;
	std::cout<<"a\t" << &a << std::endl;
	std::cout<<"a\t" << a << std::endl;
	std::cout<<"i\t" <<&i << std::endl;
	std::cout<<"i\t" <<i << std::endl;
	std::cout<<"c\t" << &c << std::endl;
	std::cout<<"c\t" << c << std::endl;
	std::cout<<"copy\t" << &copy << std::endl;
	std::cout<<"copy\t" << copy << std::endl;
	std::cout<<"name\t" << &name+i << std::endl;
	std::cout<<"name\t" << name+i << std::endl;
	std::cout<<"name\t" << name << std::endl;
	
}
