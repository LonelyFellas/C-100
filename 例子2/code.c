#include <stdio.h>
int main()
{
  double profit;
  double bonus, bonus1, bonus2, bonus3, bonus4, bonus5;
  printf("请输入当月的利润：");
  scanf("%lf", &profit);

  bonus1 = 100000 * 0.1;
  bonus2 = bonus1 + 100000 * 0.075;
  bonus3 = bonus2 + 200000 * 0.05;
  bonus4 = bonus3 + 200000 * 0.03;
  bonus5 = bonus4 + 400000 * 0.015;

  if (profit <= 100000)
  {
    bonus = profit * 0.1;
  }
  else if (profit <= 200000)
  {
    bonus = bonus1 + (profit - 100000) * 0.075;
  }
  else if (profit <= 400000)
  {
    bonus = bonus2 + (profit - 200000) * 0.05;
  }
  else if (profit <= 600000)
  {
    bonus = bonus3 + (profit - 400000) * 0.03;
  }
  else if (profit <= 1000000)
  {
    bonus = bonus4 + (profit - 600000) + 0.015;
  }
  else if (bonus > 1000000)
  {
    bonus = bonus5 + (bonus - 1000000) * (1 + 0.01);
  }
  printf("bonus is %lf\n", bonus);
  return 0;
}