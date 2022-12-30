#include <iostream>
#include <vector>
#include <string>
using namespace std;

int getArea(string[], int, int, int);
bool checkArea(string[], int, int, int, int);

/*
One approach is to step through each point
for each point we locate a perimeter of equal width and height
we can then check if the possible square is valid 
meaning it must be filled with all 1s
if valid we determine the area and update our highest value
*/
int MaximalSquare(string strArr[], int size) 
{
	int total = 1;

	// traverse for valid points to analyze
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < strArr[row].length(); col++)
		{
			// condition to get a starting point to analyze from
			if (strArr[row][col] == '1')
			{
				int area = getArea(strArr, size, row, col);

				// update value
				if (area > total)
				{
					total = area;
				}
			}
		}
	}

	return total;
}

// get area method
// will analyze current point and find a square of equal width and height 
int getArea(string arr[],int size, int row, int col)
{
	int tempRow = row;
	int tempCol = col;

	int area = 1;

	while (tempRow+1 < size && tempCol+1 < arr[0].length())
	{
		// expand the width and height
		if (arr[tempRow + 1][col] == '1' && arr[row][tempCol + 1] == '1')
		{
			tempRow++;
			tempCol++;

			// check if current expansion is a valid full square
			if (checkArea(arr, row, col, tempRow, tempCol))
			{
				
				area++;
			}
			else
			{
				return area * area;
			}
		}
		else
		{
			return area * area;
		}
	}

	return area*area;
}

// method to check if points provided form a full square
bool checkArea(string arr[], int row, int col, int rowLimit, int colLimit)
{
	for (row; row <= rowLimit; row++)
	{
		for (int y = col; y <= colLimit; y++)
		{
			if (arr[row][y] != '1')
			{
				return false;
			}
		}
	}

	return true;
}


int main() 
{
	string A[] = { "10100", "10111", "11111", "10010" };
	string B[] = { "0111", "1111", "1111", "1111" };
	string C[] = { "0111", "1101", "0111" };

	cout << MaximalSquare(A, sizeof(A)/sizeof(A[0])) << endl; // 4
	cout << MaximalSquare(B, sizeof(B) / sizeof(B[0])) << endl; // 9
	cout << MaximalSquare(C, sizeof(C) / sizeof(C[0])) << endl; // 1
	return 0;
}