#include "json_list.h"
#include "data/String.h"
#include "data/Integer.h"

json_list::json_list(){
}

json_object* json_list::parse(const char * input, int length){
	json_list* l = new json_list();
	const char* in = input;

	while(in[_index] !=']' || _index<length){

		json_object* o= json_object::parse(input,length);
		l->v.push_back(o);

		_index++;
	}
	return l;
}

json_object* json_list::operator[] (int key) const{
	return this->v[key];
}

json_object:: _type json_list::type(){
      return this->LIST;
}

std::string json_list::to_string(){
	std::string s="[";
	for(int i =0; i !=v.size(); i++){
		s+= v[i]->to_string();

		if(i!= 0 && i !=v.size()) s+=", ";
		s+=v[i]->to_string();
	}

		s+="]";
		return s;


}
