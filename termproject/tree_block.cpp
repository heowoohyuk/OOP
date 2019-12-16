#include "tree_block.h"


tree_block::tree_block(int c1, int c2, int c3) {

	block* top = new block(c1);
	top->set_location(2, 0);
	big_block::v.push_back(top);
	block* mid = new block(c2);
	mid->set_location(2, 1);
	big_block::v.push_back(mid);
	block* bot = new block(c3);
	bot->set_location(2, 2);
	big_block::v.push_back(bot);

	array_2d *array;
	array->insert(v);
	
}

void tree_block::rotate() {
	int x_top = v[0]->get_x(), y_top = v[0]->get_y();
	int x_mid = v[1]->get_x(), y_mid = v[1]->get_y();
	int x_bot = v[2]->get_x(), y_bot = v[2]->get_y();
	int temp_x, temp_y;
	if (y_top > y_mid) {
		temp_x = x_top;
		temp_y = y_top;
		x_top = x_mid + 1;
		y_top = y_mid;

		x_bot = x_mid - 1;
		y_bot = y_mid;

		v[0]->set_location(x_top, y_top);
		v[2]->set_location(x_bot, y_bot);
	}
	else if (y_top == y_mid) {
		x_top = temp_x;
		y_top = temp_y;

		x_bot = temp_x;
		y_bot = temp_y + 2;

		v[0]->set_location(x_top, y_top);
		v[2]->set_location(x_bot, y_bot);

	}

}
