#include <iostream>
#include <string>
using namespace std;



string result;

void traversal(string tree[], int index, int size)
{
	// base case to return to the caller if current node is null
	// Or if we have gone pass our array size
	if (index >= size || tree[index] == "#")
	{
		return;
	}

	// include the current node to our result
	result += tree[index] + " ";

	// special case from when we go out of bounds but due to the index not properly representing the current parent
	// for example if a parent has a leaf node to its left, than the index needs to be updated
	// That is the leaf node will not count, so we decrease our index to represent a valid parent node
	// Again this is only for when the current parent had a leaf node sibling to its left
	if (2 * index + 1 >= size && tree[index - 1] == "#")
	{
		index--;
	}

	// move to the left of current node
	traversal(tree, 2 * index + 1, size);

	// move to the right of current node
	traversal(tree, 2 * index + 2, size);
}

string PreorderTraversal(string strArr[], int size) 
{
	result = ""; // string to store our result
	int index = 0; 
	
	// calling our method passing it index 0 which represents the root of our tree
	traversal(strArr, index, size);

	return result;
}

int main() 
{
	// string A[] = { "5", "2", "6", "1", "9", "#", "8", "#", "#", "#", "#", "4", "#" };
	string B[] = { "4", "1", "5", "2", "#", "#", "#" };
	// string C[] = { "2", "6", "#" };
	// string D[] = { "5", "2", "6", "#", "9", "8", "1", "#", "#", "12", "15", "#", "#", "#", "45" };
	
	// cout << PreorderTraversal(A, sizeof(A) / sizeof(A[0])) << endl; // 5 2 1 9 6 8 4
	cout << PreorderTraversal(B, sizeof(B) / sizeof(B[0])) << endl; // 4 1 2 5
	// cout << PreorderTraversal(C, sizeof(C) / sizeof(C[0])) << endl; // 2 6
	// cout << PreorderTraversal(D, sizeof(D) / sizeof(D[0])) << endl; // 5 2 9 12 15 6 8 1 45
	return 0;
}