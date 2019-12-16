#ifndef ARRAY_2D_H
#define ARRAY_2D_H
#include <set>
#include <vector>
#include <iostream>
#include "block.h"
#include "color_block.h"
#include "big_block.h"

#define X_BOARD 5
#define Y_BOARD 12
using namespace std;
class array_2d {
private:
	static block *block_array[X_BOARD][Y_BOARD];
	static int score;

public:
	array_2d();
	bool can_make(int type);
	void delete_block(int x, int y);
	void insert(vector<block *> v);
	void insert(int x, int y, block * b);
	block *get_block(int x, int y);
	bool can_move(int x, int y);
	void print();
	int get_score();
};
#endif
