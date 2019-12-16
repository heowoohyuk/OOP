#include "fold_block.h"


//기역자 블럭 만들기
fold_block::fold_block(){
}
fold_block::fold_block(int c1, int c2, int c3) {
	block* left = new block(c1);
	left->set_location(1, 1);

	block* right = new block(c2);
	right->set_location(1, 2);

	block* down = new block(c3);
	down->set_location(2, 2);

	big_block::v.push_back(left);
	big_block::v.push_back(right);
	big_block::v.push_back(down);

	array_2d *array;

	array->insert(big_block::v);

}

void fold_block::rotate() {

	int x_left = v[0]->get_x(), y_left = v[0]->get_y();
	int x_right = v[1]->get_x(), y_right = v[1]->get_y();
	int x_down = v[2]->get_x(), y_down = v[2]->get_y();

	int rotate = 0;  //기본상태
	int temp_x, temp_y;
	if (rotate == 0) {
		temp_x = x_right;
		temp_y = y_right;

		x_right = x_down;
		y_right = y_down;

		x_left = temp_x;
		y_left = temp_y;

		x_down = x_down - 1;
		y_down = y_down;



		v[0]->set_location(x_left, y_left);
		v[1]->set_location(x_right, y_left);
		v[2]->set_location(x_down, y_down);

		rotate = 1; //90 돌린 상태
	}
	else if (rotate == 1) {
		temp_x = x_right;
		temp_y = y_right;

		x_right = x_down;
		y_right = y_down;

		x_left = temp_x;
		y_left = temp_y;

		x_down = x_down;
		y_down = y_down - 1;

		v[0]->set_location(x_left, y_left);
		v[1]->set_location(x_right, y_right);
		v[2]->set_location(x_down, y_down);

		rotate = 2;
	}

	else if (rotate == 2) {
		temp_x = x_right;
		temp_y = y_right;

		x_right = x_down;
		y_right = y_down;

		x_left = temp_x;
		y_left = temp_y;

		x_down = x_down + 1;
		y_down = y_down;


		v[0]->set_location(x_left, y_left);
		v[1]->set_location(x_right, y_right);
		v[2]->set_location(x_down, y_down);

		rotate = 3;//270
	}
	else if (rotate == 3) {
		temp_x = x_right;
		temp_y = y_right;

		x_right = x_down;
		y_right = y_down;

		x_left = temp_x;
		y_left = temp_y;

		x_down = x_down;
		y_down = y_down + 1;

		v[0]->set_location(x_left, y_left);
		v[1]->set_location(x_right, y_right);
		v[2]->set_location(x_down, y_down);

		rotate = 0; //360
	}


}
