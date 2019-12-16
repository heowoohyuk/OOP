#include "cross_block.h"



cross_block::cross_block(int c1, int c2, int c3, int c4, int c5) {


	block* top = new block(c1);
	top->set_location(2, 0);
	big_block::v.push_back(top);
	block* mid = new block(c2);
	mid->set_location(2, 1);
	big_block::v.push_back(mid);
	block* bot = new block(c3);
	bot->set_location(2, 2);
	big_block::v.push_back(bot);
	block* left = new block(c4);
	mid->set_location(1, 1);
	big_block::v.push_back(mid);
	block* right = new block(c5);
	bot->set_location(1, 3);
	big_block::v.push_back(bot);
	array_2d *array;
	array->insert(v);
	
}


void cross_block::rotate() {
	int x_top = v[0]->get_x(), y_top = v[0]->get_y();
	int x_mid = v[1]->get_x(), y_mid = v[1]->get_y();
	int x_bot = v[2]->get_x(), y_bot = v[2]->get_y();
	int x_left = v[3]->get_x(), y_left = v[3]->get_y();
	int x_right = v[4]->get_x(), y_right = v[4]->get_y();

	int temp_x_top = x_top, temp_y_top = y_top;
	int temp_x_bot = x_bot, temp_y_bot = y_bot;
	int temp_x_left = x_left, temp_y_left = y_left;
	int temp_x_right = x_right, temp_y_right = y_right;

	if (x_top == temp_x_top && y_top == temp_y_top) {
		x_top = temp_x_right;
		y_top = temp_y_right;

		x_right = temp_x_bot;
		y_right = temp_y_bot;

		x_bot = temp_x_left;
		y_bot = temp_y_left;

		x_left = temp_x_top;
		x_left = temp_y_top;

		v[0]->set_location(x_top, y_top);
		v[2]->set_location(x_bot, y_bot);
		v[3]->set_location(x_left, y_left);
		v[4]->set_location(x_right, y_right);
	}
	else if (x_top == temp_x_right && y_top == temp_y_right) {
		x_top = temp_x_bot;
		y_top = temp_y_bot;

		x_right = temp_x_left;
		y_right = temp_y_left;

		x_bot = temp_x_top;
		y_bot = temp_y_top;

		x_left = temp_x_right;
		x_left = temp_y_right;

		v[0]->set_location(x_top, y_top);
		v[2]->set_location(x_bot, y_bot);
		v[3]->set_location(x_left, y_left);
		v[4]->set_location(x_right, y_right);

	}
	else if (x_top == temp_x_bot && y_top == temp_y_bot) {
		x_top = temp_x_left;
		y_top = temp_y_left;

		x_right = temp_x_top;
		y_right = temp_y_top;

		x_bot = temp_x_right;
		y_bot = temp_y_right;

		x_left = temp_x_bot;
		x_left = temp_y_bot;

		v[0]->set_location(x_left, y_left);
		v[2]->set_location(x_top, y_top);
		v[3]->set_location(x_right, y_right);
		v[4]->set_location(x_bot, y_bot);
	}

	else if (x_top == temp_x_left && y_top == temp_y_left) {
		x_top = temp_x_top;
		y_top = temp_y_top;

		x_right = temp_x_right;
		y_right = temp_y_right;

		x_bot = temp_x_bot;
		y_bot = temp_y_bot;

		x_left = temp_x_left;
		x_left = temp_y_left;

		v[0]->set_location(x_top, y_top);
		v[2]->set_location(x_bot, y_bot);
		v[3]->set_location(x_left, y_left);
		v[4]->set_location(x_right, y_right);
	}


}
