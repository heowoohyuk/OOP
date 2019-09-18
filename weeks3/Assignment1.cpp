#include <iostream>
int Data = 10;
int BSS;


int* code(){
return 0;
}
int main(){
static const int rodata = 1;
	int*Heap = new int[1];
	Heap[0]=0;
	int stack;


std::cout << "code\t" <<(void*) code << std::endl;
std::cout << "Rodata\t" <<(void*) rodata << std::endl;
std::cout << "data\t" <<&Data << std::endl;
std::cout << "BSS\t" <<&BSS  << std::endl;
std::cout << "HEAP\t" <<Heap<< std::endl;
std::cout << "Stack\t" <<&Stack << std::endl;

}
