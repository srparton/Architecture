#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
  Purpose: "string" of words to test against each other. 
*/
char *correctWord[11] = {"l","le","lev","leve","leven","levens","levensh","levensht","levenshte","levenshtei","levenshtein"};
char *wrongWord[1] = {"levenshtein"};

/*
  Purpose: construct containing 2 string arrays for correct words and wrong words
*/
struct result{
  int levenResult;
  char correct[25];
  char wrong[25];
};

/*
  Purpose: Will determine which value (a b or c) is the smallest and will return that value.
  Input: 3 variable of type Integer must be passed in
  Precondition: Values cant be null
  Postcondition: Returns smallest of 3 values as type int
*/
int minimum(int a, int b, int c){
  if(a <= b && a <= c)
    return a;
  else if(b <= a && b <= c)
    return b;
  else
    return c;
}

/*
  Purpose: Will calculate the diffrence between two diffrent words. Ex: this and thos has a levensthain distance of 1
  Input: 2 character arrays 
  Precondition: 2 character arrays of length non-null
  Postcondition: Will return the distance or diffrence 
*/
int Levensthain(char *s1,char *s2){
  int s1len, s2len, i, x, y, z = 0;
  s1len = strlen(s1);
  s2len = strlen(s2);
  char *s3 = (char *)malloc((s2len) * sizeof(char));
  char *matrixRows = (char *)malloc((s1len) * sizeof(char));
  if(s1len > s2len){
    i=0;
    s3 = (char *)realloc(s3, (s1len - s2len) * sizeof(char));
    z = s1len - s2len;
    strcpy(s3, s2);
    while(i <= z){
      strcat(s3,"~");
      i++;
    }
    strcpy(matrixRows, s1);
    s2len = s1len;
  }
  else if(s2len > s1len){
    i=0;
    matrixRows = (char *)realloc(matrixRows, (s2len - s1len) * sizeof(char));
    z = s2len - s1len;
    strcpy(matrixRows, s1);
    while(i <= z){
      strcat(matrixRows,"~");
      i++;
    }
    strcpy(s3, s2);
    s1len = s2len;
  }
  else{
    s3 = (char *)realloc(s3, s2len * sizeof(char));
    strcpy(matrixRows, s1);
    strcpy(s3, s2);
  }
  //printf("s3->%s,matrixRows->%s\n", s3, matrixRows);
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
      //printf("s1[y-1] -> %d\n", (s1[y-1] == s2[x-1] ? 0 : 1));
      matrix[x][y] = minimum(matrix[x-1][y] + 1, matrix[x][y-1] + 1, matrix[x-1][y-1] + (matrixRows[y-1] == s3[x-1] ? 0 : 1));
    }
  }
  //printMatrix(s1len + 1, s2len + 1, matrix);
  /*for(int row = 0; row < s1len; row++){
    for (int col=0; col < s2len; col++){
      printf("%d  ", matrix[row][col]);
    }
    printf("\n");
  }*/
  //printf("s1 %d, s2 %d", s1len, s2len);
  free(s3);
  free(matrixRows);
  return(matrix[s2len][s1len]);
}


int main() {
  struct result resultArray[11];
  struct result resultArray2[11];
  int i = 0;
  char *correctptr;
  char *wrongptr;
  char firstInput[25];
  char secondInput[25];
  while(i < 11){
    resultArray[i].levenResult = Levensthain(correctWord[i], wrongWord[0]);
    correctptr = correctWord[i];
    strcpy(resultArray[i].correct, correctptr);
    wrongptr = wrongWord[0];
    strcpy(resultArray[i].wrong, wrongptr);
    i++;
  };
  i=0;
  while(i < 11){
    resultArray2[i].levenResult = Levensthain(wrongWord[0], correctWord[i]);
    wrongptr = correctWord[i];
    strcpy(resultArray2[i].wrong, wrongptr);
    correctptr = wrongWord[0];
    strcpy(resultArray2[i].correct, correctptr);
    i++;
  };
  i = 0;
  while(i < 11){
    printf("distance between %s and %s: %d\n", resultArray[i].correct, resultArray[i].wrong, resultArray[i].levenResult);
    printf("distance between %s and %s: %d\n", resultArray2[i].correct, resultArray2[i].wrong, resultArray2[i].levenResult);
    printf("\n");
    i++;
  };
  return 0;
}
