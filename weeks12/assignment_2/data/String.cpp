#include "String.h"

String::String(const std::string& s){
	this->_val=s;
}

std::string String::val(){
	return this->_val;

}

void String::set_val(const std::string& s){
	this->_val=s;
}

json_object* String::parse(const char* input, int length, char base){
	const char* in = input;
	std::string s="";

	while(in[_index] != base && _index <length){
			s+=in[_index];
			_index++;
		

	}

	return new String(s);
}
json_object::_type String::type(){
	return this->STRING;
}

std::string String::to_string(){
	return this->val();
}


