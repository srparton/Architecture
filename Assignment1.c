#include <stdio.h>
#include <string.h>


char *correctWord[15] = {"test","levenshtein","program","television","ghost","destiny","fallen","taken","phone","apple","clean","one","two","three","computer"};
char *wrongWord[15] = {"eest","meilenstein","pgm    ","tv       ","aaabb","qwetopy","fall  ","given","watch","aamsu","dirty","on ","2  ","thirt","pc      "};

struct result{
  int levenResult;
  char correct[25];
  char wrong[25];
};

void* printMatrix(int numCol, int numRow, int** matrix){
  int row, col;
  for (row=0; row < numRow; row++){
    for (col=0; col < numCol; col++){
      //printf("%d  ", *(matrix + row*col + col));
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


int Levensthain(char *s1,char *s2){
//  printf("s1 -> %s\n", s1);
//  printf("s2 -> %s\n", s2);
  int s1len, s2len, x, y, z;
  char *s3 = (char *)malloc(512);
  s1len = strlen(s1);
  //printf("s1len -> %d\n",s1len);
  s2len = strlen(s2);
  if(s1len > s2len){
    /*z = s1len - s2len;
    strcpy(s3,s2);
    strcat(s3," ");*/
    s2len = s1len;
  }
  //printf("s2len -> %d\n",s2len);
  int matrix[s2len + 1][s1len + 1];
  matrix[0][0] = 0;
  for (x = 1; x <= s2len; x++){
    matrix[x][0] = matrix[x-1][0] + 1;
    //printf("here -> %d",matrix[0][y-1]);
  }
  for (y = 1; y <= s1len; y++){
    matrix[0][y] = matrix[0][y-1] + 1;
  }
  for (x = 1; x <= s2len; x++){
    for (y = 1; y <= s2len; y++){
      //printf("s1[y-1] -> %d\n", (s1[y-1] == s2[x-1] ? 0 : 1));
      matrix[x][y] = minimum(matrix[x-1][y] + 1, matrix[x][y-1] + 1, matrix[x-1][y-1] + (s1[y-1] == s2[x-1] ? 0 : 1));
    }
  }
  //printMatrix(s1len + 1, s2len + 1, matrix);

/*  for(int row = 0; row < s1len; row++){
    for (int col=0; col < s2len; col++){
      printf("%d  ", matrix[row][col]);
    }
    printf("\n");
  }*/
  //printf("s1 %d, s2 %d", s1len, s2len);

  return(matrix[s2len][s1len]);
}


int main() {
  printf("test print -> %s\n", correctWord[0]);
  int i = 0;
  char *test1 = "television";
  char *test2 = "tv        ";

  while(i < 15){
    printf("distance between %s and %s : %d\n", correctWord[i],wrongWord[i], Levensthain(correctWord[i], wrongWord[i]));
    i++;
  };
  //printf("distance between %s and %s : %d\n", correctWord[3],wrongWord[3], Levensthain(test1, test2));
  //printf("distance between %s and %s : %d\n", correctWord[0],wrongWord[0], Levensthain(correctWord[0], wrongWord[0]));
  struct result resultArray[1];
  //resultArray[0].levenResult = Levensthain(s1, s2);
  //int p = resultArray[1].correct;
  //strcpy(resultArray[0].correct, s1);
  //resultArray[1].wrong = *s1;
  //printf("levenResult %d\n correct %s\n incorrect \n",resultArray[0].levenResult,resultArray[0].correct);
  return 0;
}
