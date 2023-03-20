#include <stdbool.h>
#include <stdio.h>

bool is_leap_year(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0)) {
    return true;
  }
  return false;
}

int main() {
  int year, month, day;
  int current;

  printf("请您输入年月日(例如：2015,10,1）: ");
  scanf("%d, %d, %d", &year, &month, &day);

  switch(month) {
    case 1: current = 0; break;
    case 2: current = 31; break;
    case 3: current = 59; break;
    case 4: current = 90; break;
    case 5: current = 120; break;
    case 6: current = 151; break;
    case 7: current = 181; break;
    case 8: current = 212; break;
    case 9: current = 243; break; 
    case 10: current = 273; break;
    case 11: current = 304; break;
    case 12: current = 334; break;
  }

  if (current > 59 && is_leap_year(year)) {
    current += day + 1;
  } else {
    current += day;
  }

  printf("您输入的这一天是这一年的%d天.\n", current);
}

