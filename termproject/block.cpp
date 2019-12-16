#include "block.h"


//�� ����
block::block(int color) {
	this->color = color;
	this->set_location(2, 0);
}


//�� ����
block::~block() {
	this->color = 0;
}

//�� ���� ��������
int block::get_color() {
	return this->color;
}

//�� x��ǥ
int block::get_x() {
	return this->x;
}
//�� y��ǥ
int block::get_y() {
	return this->y;
}

//�� �׷츸���
void block::set_group(color_block *group) {
	this->group = group;
}
//�� �׷� ��������
color_block* block::get_group() {
	return this->group;
}
//�� ��ġ ���ϱ�
void block::set_location(int x, int y) {
	this->x = x;
	this->y = y;
}

//�� ���� �̵� ����?
bool block::can_left() {
	return false;
}
//�� ������ �̵�����?
bool block::can_right() {
	return false;
}

//�� �Ʒ��� �������� ����?
bool block::can_down() {

	return false;
}
//�� �������̵�
void block::right() {
	array_2d::delete_block(this->get_x(), this->get_y());
	this->set_location(this->get_x() + 1, this->get_y());
}
//�� �����̵�

void block::left() {
	array_2d::delete_block(this->get_x(), this->get_y());
	this->set_location(this->get_x() - 1, this->get_y());

}
//�� �Ʒ��� 
void block::down() {
	array_2d::delete_block(this->get_x(), this->get_y());
	this->set_location(this->get_x(), this->get_y() + 1);

}
//�� �ѹ濡 �Ʒ���
void block::down_all() {
	int x = 0;
	array_2d::delete_block(this->get_x(), this->get_y());
	while (array_2d::block_array[this->get_y() + x][this->get_x()] != 0) {
		array_2d::delete_block(this->get_x(), this->get_y() + x);
		this->set_location(this->get_x(), this->get_y() + x);

		x++;
	}
}

//�� ��ġ�Ⱑ��?
//�� ���߰���?
//�� ��ġ��
//�� ��ĥ���Ѱ� ã��
