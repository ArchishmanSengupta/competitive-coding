
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int squares[8][3][3] = {
		{{8,1,6},{3,5,7},{4,9,2}},
		{{4,3,8},{9,5,1},{2,7,6}},
		{{2,9,4},{7,5,3},{6,1,8}},
		{{6,7,2},{1,5,9},{8,3,4}},
		{{6,1,8},{7,5,3},{2,9,4}},
		{{8,3,4},{1,5,9},{6,7,2}},
		{{4,9,2},{3,5,7},{8,1,6}},
		{{2,7,6},{9,5,1},{4,3,8}}
	};
	int input[3][3];
	cin>>input[0][0]>>input[0][1]>>input[0][2]>>input[1][0]>>input[1][1]>>input[1][2]>>input[2][0]>>input[2][1]>>input[2][2];
	int result = 5000;
	for(int i =0; i<8; i++)
	{
		int curr = 0;
		for(int j = 0; j<3; j++)
		{
			for(int k = 0; k<3; k++)
			{
				curr+=abs(squares[i][j][k]-input[j][k]);
			}
		}
		result = min(result, curr);
	}
	cout<<result;
	return 0;
}
