#include "json_dict.h"
#include "data/String.h"
#include "data/Integer.h"
json_dict::json_dict(){
}

void json_dict::put(json_object* key, json_object* value){
	int i =this->find(key);

	if(i ==-1){
		v.push_back(std::make_pair(key,value));
	}
	else{
		v[i]= std::make_pair(key,value);
	}
}



int json_dict::find(json_object* key){
	
	for(int i=0; i<v.size(); i++){
	if(key->to_string() == v[i].first->to_string()){
			return i;
		}
	}
	return -1;
}


json_object* json_dict::parse (const char* input, int length){
	json_dict* dict = new json_dict();
	const char* in = input;
	while(in[_index] !='}' || _index < length){
		json_object* key= json_object::parse(input,length);
		_index++;
		json_object* value=json_object::parse(input,length);
		dict->put(key,value);
		_index++;
         
}
_index++;
return dict;
}

json_object* json_dict:: operator[](json_object* key) const{
	for(int i=0; i<v.size(); i++){
		if(key->to_string()==v[i].first->to_string())  
			return v[i].second;
	}
	return nullptr;
}
json_object* json_dict:: operator[](const std::string& key) const{
	for(int i=0; i<v.size(); i++){
		if(v[i].first->to_string()==key)  
			return v[i].second;
}
return nullptr;
}
json_object* json_dict:: operator[](int key)const{
	for(int i=0; i<v.size(); i++){
		if(v[i].first->to_string()==std::to_string(key))  
			return v[i].second;
}
return nullptr;
}
json_object::_type json_dict::type(){
	return this->DICT;
}

std::string json_dict::to_string(){
	std::string s = "{";
	for(int i=0;i <v.size();i++){
		if(i!=0&&i!=v.size()){
			s+=", ";
		}
		s+=this->v[i].first->to_string();
		s+=":";
		s+=this->v[i].second->to_string();
	}
	s+="}";
	return s;
}
