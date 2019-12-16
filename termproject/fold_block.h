#pragma once
#include "big_block.h"
#ifndef FOLD_BLOCK_H
#define FOLD_BLOCK_H


class fold_block :public big_block {
public:
	fold_block(int c1, int c2, int c3);
	void rotate();


};
#endif
