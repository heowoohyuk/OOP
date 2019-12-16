#include "array_2d.h"
#ifndef BIG_BLOCK_H
#define BIG_BLOCK_H

using namespace std;
class big_block {
protected:

	vector<block *> v;
	int min_x, min_y, max_x, max_y;

public:
	~big_block();
	virtual void rotate();
	bool can_left();
	bool can_right();
	bool can_down();
	void left();
	void right();
	bool down();
	bool down_all();
	bool move(int input);
};

#endif
