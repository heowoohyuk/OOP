#include <iostream>
#include "array_2d.h"
#include "big_block.h"
#include "tree_block.h"
#include "fold_block.h"
#include "cross_block.h"
#include "color_block.h"
#include "getch.h"
array_2d *board = new array_2d();
big_block *fold;
big_block *tree;
big_block *cross;
bool madeblock;
big_block *newblock;


void start(){
		board->print();
	}
void keyboard_input(){
		char in;
		in = getchar();

		if(in =='w' && in =='e'){
			newblock->rotate();
		}
	
		else if(in =='d'){
			newblock->right();
		}
		else if(in =='s'){
			newblock->down();
			madeblock = true;
		}
		else if(in =='a'){
			newblock->left();
		}
	}
bool  make_block(){
		srand((unsigned int)time(0));
		int block_type = rand()% 3 +1;
		int color = rand()%4+1;
		bool make =false;
		if(block_type ==1 && board->can_make(1)){
			fold = new fold_block(color,color,color);
			make =true;
			newblock= fold;
		}
		else if (block_type ==2 && board->can_make(2)){
			tree = new tree_block(color,color,color);
			make =true;
			newblock= tree;
		}
		else if (block_type ==3 && board->can_make(3)){
			cross = new cross_block(color,color,color,color,color);
			make =true;
			newblock= cross;
		}
}
void playing(){
		while(1){
			if(!make_block()) break;
		
			while(1){
				start();
				keyboard_input();
				if(madeblock)
					break;
			}
		}
	}
int main() {
	playing();
return 0;
}

