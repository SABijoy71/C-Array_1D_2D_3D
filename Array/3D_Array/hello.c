// 3D Array //

#include <stdio.h>
#include <math.h>

int main(){

	int array3D[2][3][4] = {
		{
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
		},
		{
			{13,14,15,16},
			{17,18,19,20},
			{21,22,23,24}
		}
	};

	int main_row,sub_row,col;
	for(main_row = 0; main_row < 2; main_row++){
		for(sub_row = 0; sub_row < 3; sub_row++){
			for(col = 0; col < 4; col++){
				printf("%d\n", array3D[main_row][sub_row][col]);
			}
		}
	}

	return 0;
}