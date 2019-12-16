#include "color_block.h"

set<block *> color_block::set;

color_block::color_block(block *b) {
}

void color_block::insert(vector<block *> vec) {
	 for (auto& iter :vec ){
        set.insert(iter);
    }
}

set<block *> color_block::get_set() {
	return s;

}

int color_block::get_set_size() {
	return this->s.size();

}

void color_block::explosion() {
}

