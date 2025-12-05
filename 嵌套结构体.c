#include <stdio.h>
int main(){
    struct Date {
        int year;
        int month;
        int day;
    };
    struct Student {
            char name[10];
            int age;
            struct Date birthday;   
        };
        struct Student student1 = {"张三", 18, {1999, 1, 1}};
        printf("姓名：%s\n", student1.name);
        printf("年龄：%d\n", student1.age);
        printf("生日：%d-%d-%d\n", student1.birthday.year, student1.birthday.month, student1.birthday.day);
        return 0;
    }
