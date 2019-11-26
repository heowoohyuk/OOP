#include "json_object.h"
#include "json_dict.h"
#include "json_list.h"
#include "data/String.h"
#include "data/Integer.h"

int json_object::_index =0;
json_object* json_object:: parse(const char *in, int length){
 	const char * input = in;
 	while(_index < length){
		
		if(input[_index]=='{'){
			return json_dict::parse(in,length);
		}
	
		else if(input[_index]=='['){
			return json_list::parse(in,length);
			}

		else if(input[_index]>='0' && input[_index]<='9'){
			return Integer::parse(in,length);
		}
		else if(input[_index]=='\''){
			return String::parse(in,length,'\'');
		}
		else if(input[_index]=='"'){
			return String::parse(in,length,'"');
		}
		else if(input[_index] =='\0'){
			return nullptr;
		}
		else if(input[_index] =='}'){
			return nullptr;
		}
		else if(input[_index] ==']'){
			return nullptr;
		}
   _index++;
		
}
}
json_object* json_object::parse(const std::string& input){
	json_object::_index =0;
	const char *in = input.c_str();
	int length=input.length();
  return json_object:: parse(in,length);
}

