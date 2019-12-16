#include "block.h"
#include <set>
#include<vector>
#ifndef COLOR_BLOCK_H
#define COLOR_BLOCK_H

using namespace std;
class block;
class color_block {
private:
    static set<block *> s;
public:
    color_block(block *b);
    void insert(vector<block *> v);
    set<block *> get_set();
    int get_set_size();
    void explosion();
};

#endif
