#include <iostream>
#define n 3
#define m 2
#define INT_MIN -3
using namespace std;
int getLongestPathLengthUtil(int i, int j, int matrix[n][m], int table[n][m]) {
   if (i < 0 || i >= n || j < 0 || j >= n)
   return 0;
   if (table[i][j] != -1)
      return table[i][j];
   int x = INT_MIN, y = INT_MIN, z = INT_MIN, w = INT_MIN;
   if (j < n - 1 && ((matrix[i][j] + 1) == matrix[i][j + 1]))
      x = 1 + getLongestPathLengthUtil(i, j + 1, matrix, table);
   if (j > 0 && (matrix[i][j] + 1 == matrix[i][j - 1]))
      y = 1 + getLongestPathLengthUtil(i, j - 1, matrix, table);
   if (i > 0 && (matrix[i][j] + 1 == matrix[i - 1][j]))
      z = 1 + getLongestPathLengthUtil(i - 1, j, matrix, table);
   if (i < n - 1 && (matrix[i][j] + 1 == matrix[i + 1][j]))
      w = 1 + getLongestPathLengthUtil(i + 1, j, matrix, table);
      return table[i][j] = max(x, max(y, max(z, max(w, 1))));
}
int getLongestPathLength(int matrix[n][m]) {
   int result = 1;
   int table[n][m];
   for(int i = 0; i < n; i++)
   for(int j = 0; j < n; j++)
   table[i][j] = -1;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if (table[i][j] == -1)
         getLongestPathLengthUtil(i, j, matrix, table);
         result = max(result, table[i][j]);
      }
   }
   return result;
}
int main() {
   int mat[n][m] = { { 6,7},
   { 2,1 },
   { 4,5 } };
   cout << "Length of the longest path is "<< getLongestPathLength(mat);
}