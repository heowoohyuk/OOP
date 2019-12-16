#include "array_2d.h"

int array_2d::score = 0;
block *array_2d::block_array[Y_BOARD][X_BOARD] = {0};


//array(가로 5 세로 12)를 0으로 초기화 한 판
array_2d::array_2d() {
	array_2d::score = 0;
	for (int i = 0; i < Y_BOARD; i++) {
		for (int j = 0; j < X_BOARD; j++) {
			array_2d::block_array[i][j] = new block(0);
			array_2d::block_array[i][j]->set_location(j, i);
		}
	}

}

//판에다가 블럭을 생산할 수 있는지 없는지 판단 함수
bool array_2d::can_make(int type) {
	// type == 1:fold /2:tree/3:cross
	if (type == 1) {
		if (block_array[1][1] == 0 && block_array[1][2] == 0) {
			return true;
		}
		return false;
	}
	else if (type == 2) {
		if (block_array[1][2] == 0 && block_array[2][2] == 0) {
			return true;
		}
		return false;
	}
	else if (type == 3) {
		if (block_array[1][1] == 0 && block_array[1][2] == 0
			&& block_array[1][3] == 0 && block_array[2][2]) {
			return true;
		}
		return false;
	}
	return false;
}
//블럭 삭제 함수
void array_2d::delete_block(int x, int y) {
	block_array[y][x] = new block(0);
}
//블럭을 넣는 함수 ( vector의 블럭을 받음)
void array_2d::insert(vector<block *> v) {
	vector<block *>::iterator iter;
	for (auto& iter : v) {
		insert(iter->get_x(), iter->get_y(), iter);
	}

}
//블럭을 넣는 함수 (x,y좌표 블럭 b를 받음)
void array_2d::insert(int x, int y, block *b) {
	block_array[y][x] = b;
}
//x,y좌표의 블록을 가져오는 함수
block* array_2d::get_block(int x, int y) {
	return block_array[y][x];
}
//블럭을 움직일 수 있는지 확인하는 함수
 bool array_2d::can_move(int x, int y) {
	if (x < 0 || X_BOARD <= x) return false;
	if (y < 0 || Y_BOARD <= y) return false;

	return true;

}
//print 함수 판을 출력
void array_2d::print() {
	for (int i = 0; i < Y_BOARD; i++) {
		for (int j = 0; j < X_BOARD; j++) {
			std::cout << block_array[i][j]->get_color() << "  ";
		}
		std::cout << "\n";
	}
}
//점수를 가져오는 함수
int array_2d::get_score() {
	return array_2d::score;
}

