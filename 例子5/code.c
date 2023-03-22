typedef struct more {
  int first_num;
  int second_num;
  int third_num;
} more;


#include <stdio.h>
void swap_two_number(int* greatest_number, int* less_number) {
  int temp = *less_number;
  *less_number = *greatest_number;
  *greatest_number = temp;
}
more sorted(int num1, int num2, int num3) {
  if (num1 > num2) {
    swap_two_number(&num1, &num2);
  }
  if (num1 > num3) {
    swap_two_number(&num1, &num3);
  } 
  if (num2 > num3) {
    swap_two_number(&num2, &num3);
  }
  more nums = {num1, num2, num3};
  return nums;
}

int main() {
  int num1, num2, num3;
  printf("请您输入三个数：");
  scanf("%d, %d, %d", &num1, &num2, &num3);
  
  more sorted_struct = sorted(num1, num2, num3);
  

  printf("num1 = %d, num2 = %d, num3 = %d\n", sorted_struct.first_num, sorted_struct.second_num, sorted_struct.third_num);
}
