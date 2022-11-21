#include <stdio.h>
int usageOneSitting(int, int, int);
int totalsittings(int);
int totalCharges(int);

int totalResult = 0;
int main() {
  int sittings;
  printf("Enter sittings in a month: ");
  scanf("%d", &sittings);
  for(int i=1; i<=sittings; i++) {
    int hours, minutes, seconds;
    printf("Enter Hours: ");
    scanf("%d", &hours);
    printf("Enter Minutes: ");
    scanf("%d", &minutes);
    printf("Enter Seconds: ");
    scanf("%d", &seconds);

    int totalTime = usageOneSitting(hours, minutes, seconds);
    totalsittings(totalTime);
  }
  int finalResult = totalCharges(totalResult);
  printf("Total Result: %d\n", totalResult);
  printf("Final Result: %d\n", finalResult);
  return 0;
}
int usageOneSitting(int hours, int minutes, int seconds) {
  int totalTime;
  hours = hours * 3600;
  minutes = minutes * 60;
  totalTime = hours + minutes + seconds;
  return totalTime;
}
int totalsittings(int sittings) {
  totalResult = totalResult + sittings;
}
int totalCharges(int num) {
  num = num / 3600;
  int charges = 25 * num;
  return charges;
}
