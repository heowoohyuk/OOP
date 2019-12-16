#include "array_2d.h"

int array_2d::score = 0;
block *array_2d::block_array[Y_BOARD][X_BOARD] = {0};


//array(���� 5 ���� 12)�� 0���� �ʱ�ȭ �� ��
array_2d::array_2d() {
	array_2d::score = 0;
	for (int i = 0; i < Y_BOARD; i++) {
		for (int j = 0; j < X_BOARD; j++) {
			array_2d::block_array[i][j] = new block(0);
			array_2d::block_array[i][j]->set_location(j, i);
		}
	}

}

//�ǿ��ٰ� ���� ������ �� �ִ��� ������ �Ǵ� �Լ�
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
//�� ���� �Լ�
void array_2d::delete_block(int x, int y) {
	block_array[y][x] = new block(0);
}
//���� �ִ� �Լ� ( vector�� ���� ����)
void array_2d::insert(vector<block *> v) {
	vector<block *>::iterator iter;
	for (auto& iter : v) {
		insert(iter->get_x(), iter->get_y(), iter);
	}

}
//���� �ִ� �Լ� (x,y��ǥ �� b�� ����)
void array_2d::insert(int x, int y, block *b) {
	block_array[y][x] = b;
}
//x,y��ǥ�� ����� �������� �Լ�
block* array_2d::get_block(int x, int y) {
	return block_array[y][x];
}
//���� ������ �� �ִ��� Ȯ���ϴ� �Լ�
 bool array_2d::can_move(int x, int y) {
	if (x < 0 || X_BOARD <= x) return false;
	if (y < 0 || Y_BOARD <= y) return false;

	return true;

}
//print �Լ� ���� ���
void array_2d::print() {
	for (int i = 0; i < Y_BOARD; i++) {
		for (int j = 0; j < X_BOARD; j++) {
			std::cout << block_array[i][j]->get_color() << "  ";
		}
		std::cout << "\n";
	}
}
//������ �������� �Լ�
int array_2d::get_score() {
	return array_2d::score;
}

