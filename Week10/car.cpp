#include "car.h"


car::car(){
	this->car_name=nullptr;
}

car::car(int a, int b){
	this->wheel_number=a;
	this->max_speed=b;


}

car::car(int a, int b, char* c){
this->wheel_number= a;
this->max_speed=b;
this->car_name=c;
}

car::car(int a, int b, char* c, bool d){
	this->wheel_number=a;
	this->max_speed=b;
	this->car_name=c;
	this->has_name=d;
}

char* car::get_car_name(){
	return this->car_name;
}

const char* car::get_class_name(){
	return "car";

}

void car::set_car_name(char* c){
	this->car_name=c;
}





