#include <stdio.h>
#include <string.h>

int printMatrix(int numCol, int numRow, int* matrix){
  int row, col;
  for (row=0; row < numRow; row++){
    for (col=0; col < numCol; col++){
      printf("%d  ", *(matrix + row*col + col));
    }
    printf("\n");
  }
}

int minimum(int a, int b, int c){
  if(a <= b && a <= c)
    return a;
  else if(b <= a && b <= c)
    return b;
  else
    return c;
}


int Levensthain(const char *s1,const char *s2){
  int s1len, s2len, x, y;
  s1len = strlen(s1);
  s2len = strlen(s2);
  int matrix[s2len + 1][s1len + 1];
  matrix[0][0] = 0;
  for (x = 1; x <= s2len; x++){
    matrix[x][0] = matrix[x-1][0] + 1;
  }
  for (y = 1; y <= s1len; y++){
    matrix[0][y] = matrix[0][y-1] + 1;
  }
  for (x = 1; x <= s2len; x++){
    for (y = 1; y <= s2len; y++){
      matrix[x][y] = minimum(matrix[x-1][y] + 1, matrix[x][y-1] + 1, matrix[x-1][y-1] + (s1[y-1] == s2[x-1] ? 0 : 1));
    }
  }
  for (int row=0; row < s1len; row++){
    for (int col=0; col < s2len; col++){
      printf("%d  ", matrix[row][col]);
    }
    printf("\n");
  }
  // printMatrix(s1len+1, s2len+1, matrix);
  printf("s1 %d, s2 %d", s1len, s2len);
  return(matrix[s2len][s1len]);
}


int main() {

  const char *s1 = "meilenstein";
  const char *s2 = "levenshtein";
  printf("distance between %s and %s : %d\n", s1,s2, Levensthain(s1, s2));
  return 0;

}
