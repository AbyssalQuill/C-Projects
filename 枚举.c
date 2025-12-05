#include <stdio.h>
//车辆等级枚举

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  //获取想要查询的车辆数量
  printf("请输入车辆数量：");
  int num;
  scanf("%d", &num);  
  int lvl; // 声明level变量
  for (int i=0; i<num; i++){
    printf("请输入车辆编号：");
    scanf("%d", &lvl);
    //根据车辆等级编号输出车辆等级名称
    switch (lvl) {
      case 1:
        printf("车辆等级：低\n");
        break;
      case 2:
        printf("车辆等级：中\n");
        break;
      case 3:
        printf("车辆等级：高\n");
        break;
      default:
        printf("输入错误，请重新输入！\n");
        break;
    }
  }
  printf("程序结束！\n");
  return 0;
}