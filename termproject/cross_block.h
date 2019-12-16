#pragma once
#include "block.h"
#ifndef CROSS_BLOCK_H
#define CROSS_BLOCK_H
class cross_block :public big_block {
public:
	cross_block(int c1, int c2, int c3, int c4, int c5);
	void rotate();
};
#endif
