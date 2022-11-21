#include <stdio.h>
int getscore();
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int main() {
  int score1 = getscore();
  int score2 = getscore();
  int score3 = getscore();
  int score4 = getscore();
  int score5 = getscore();
  calcAverage(score1, score2, score3, score4, score5);

  return 0;
}

int getscore() {
  int score;
  printf("Enter Your Test score: ");
  scanf("%d", &score);
  while (score < 0 || score > 100) {
    printf("Enter Your Test score Again: ");
    scanf("%d", &score);
  }
  return score;
}

void calcAverage(int score1, int score2, int score3, int score4, int score5) {
  int lowestscore = findLowest(score1, score2, score3, score4, score5);
  float average = score1 + score2 + score3 + score4 + score5;
  average = average - lowestscore;
  average = average / 4;
  printf("Average is: %.2f", average);
}
int findLowest(int score1, int score2, int score3, int score4, int score5) 
{
  if((score1 <= score2) && (score1 <= score3) && (score1 <= score4) && (score1 <= score5)) {

    return score1;
  }
  else if((score2 <= score1) && (score2 <= score3) && (score2 <= score4) && (score2 <= score5)) {

    return score2;
  }
  else if((score3 <= score1) && (score3 <= score2) && (score3 <= score4) && (score3 <= score5)) {

    return score3;
  }
  else if((score4 <= score1) && (score4 <= score2) && (score4 <= score3) && (score4 <= score5)) {

    return score4;
  }
  else {

    return score5;
  }
}
