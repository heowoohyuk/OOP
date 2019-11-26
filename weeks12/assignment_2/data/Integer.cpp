#include "Integer.h"

Integer::Integer(int value){
	this->_val=value;
}

int Integer::val(){
	return this->_val;
}

void Integer::set_val(const int& val){
this->_val=val;
}

json_object* Integer::parse(const char* input, int length){
const char* in = input;
std::string s="";
while(in[_index]>='0' && in[_index]<='9'){
	s+=in[_index];
	_index++;
}
return new Integer(std::stoi(s));
}

json_object::_type Integer::type(){
	return this->INT;
}
std::string Integer::to_string(){
	return std::to_string(this->val());
}
