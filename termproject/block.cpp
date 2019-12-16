#include "block.h"


//블럭 생성
block::block(int color) {
	this->color = color;
	this->set_location(2, 0);
}


//블럭 해제
block::~block() {
	this->color = 0;
}

//블럭 색깔 가져오기
int block::get_color() {
	return this->color;
}

//블럭 x좌표
int block::get_x() {
	return this->x;
}
//블럭 y좌표
int block::get_y() {
	return this->y;
}

//블럭 그룹만들기
void block::set_group(color_block *group) {
	this->group = group;
}
//블럭 그룹 가져오기
color_block* block::get_group() {
	return this->group;
}
//블럭 위치 정하기
void block::set_location(int x, int y) {
	this->x = x;
	this->y = y;
}

//블럭 왼쪽 이동 가능?
bool block::can_left() {
	return false;
}
//블럭 오른쪽 이동가능?
bool block::can_right() {
	return false;
}

//블럭 아래로 내려가기 가능?
bool block::can_down() {

	return false;
}
//블럭 오른쪽이동
void block::right() {
	array_2d::delete_block(this->get_x(), this->get_y());
	this->set_location(this->get_x() + 1, this->get_y());
}
//블럭 왼쪽이동

void block::left() {
	array_2d::delete_block(this->get_x(), this->get_y());
	this->set_location(this->get_x() - 1, this->get_y());

}
//블럭 아래로 
void block::down() {
	array_2d::delete_block(this->get_x(), this->get_y());
	this->set_location(this->get_x(), this->get_y() + 1);

}
//블럭 한방에 아래로
void block::down_all() {
	int x = 0;
	array_2d::delete_block(this->get_x(), this->get_y());
	while (array_2d::block_array[this->get_y() + x][this->get_x()] != 0) {
		array_2d::delete_block(this->get_x(), this->get_y() + x);
		this->set_location(this->get_x(), this->get_y() + x);

		x++;
	}
}

//블럭 합치기가능?
//블럭 폭발가능?
//블럭 합치기
//블럭 합칠만한것 찾기
