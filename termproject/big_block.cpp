#include "big_block.h"



using namespace std;


int big_block::min_x = 0;
int big_block::min_y = 0;
int big_block::max_x = X_BOARD - 1;
int big_block::max_y = Y_BOARD - 1;


big_block::~big_block() {
	v.erase(v.begin(), v.end());

	min_x = 0;
	min_y = 0;
	max_x = X_BOARD - 1;
	max_y = Y_BOARD - 1;

}

void big_block::rotate() {

}


bool can_left() {
 
for (auto& iter : this->v) {
        if(!iter->can_left()){
            return false;
        }
    }
return true;
}
//�������� ȸ������?
bool can_right() {
for(auto& iter : this->v)
    {
        if(!iter->can_right())  return false; 
    }
    return true;
}
//������ ȸ������?
bool can_down() {
    for(auto& iter : this->v)
    {
        if(!iter->can_down()) return  false; 
    }
    return true;
}
//�Ʒ��� ������ �ڸ�?
void left() {

	for (auto iter = v.begin();iter != v.end();iter++) {
		iter->left();
	}
}
//�������� �̵�
void right() {
	iter->right();
}
//�������̵�
void down() {
	iter->right();
}
//������
void down_all() {
	while(can_down()){
		for(auto iter = v.begin(); iter != v.end(); iter++)
		{
			iter->down();
		}
	}
}
//�Ʒ��� �� ������
bool move(int input) {

}
//input ��ŭ ������ ����

