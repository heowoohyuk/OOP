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
//왼쪽으로 회전가능?
bool can_right() {
for(auto& iter : this->v)
    {
        if(!iter->can_right())  return false; 
    }
    return true;
}
//오른쪽 회전가능?
bool can_down() {
    for(auto& iter : this->v)
    {
        if(!iter->can_down()) return  false; 
    }
    return true;
}
//아래로 내려갈 자리?
void left() {

	for (auto iter = v.begin();iter != v.end();iter++) {
		iter->left();
	}
}
//왼쪽으로 이동
void right() {
	iter->right();
}
//오른쪽이동
void down() {
	iter->right();
}
//내리기
void down_all() {
	while(can_down()){
		for(auto iter = v.begin(); iter != v.end(); iter++)
		{
			iter->down();
		}
	}
}
//아래로 다 내리기
bool move(int input) {

}
//input 만큼 움직임 가능

