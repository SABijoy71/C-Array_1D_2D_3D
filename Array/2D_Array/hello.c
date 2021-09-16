// 2D Array //

#include <stdio.h>
#include <math.h>

int main(){

	int array2D[2][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10}
	};

	int row,col;
	for(row = 0; row < 2; row++){
		for(col = 0; col < 5; col++){
			printf("%d\n", array2D[row][col]);
		}
	}

	return 0;
}