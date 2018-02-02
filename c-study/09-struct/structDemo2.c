#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
    ½á¹¹Ç¶Ì×
*/
struct Date{
    int year;
    int month;
    int day;
    int hour;
};
struct Student{
    char* name;
    int age;
    struct Date birthday;
};
struct Date initalDate(int year,int month,int day,int hour){
    struct Date reDate;
    reDate.year = year;
    reDate.month = month;
    reDate.day = day;
    reDate.hour = hour;
    return reDate;
};
void showBirth (struct Date date){
    printf("Birthday is: %d-%d-%d:%d\n",date.year,date.month,date.day,date.hour);
}
int main()
{
    struct Student xiaoMing;
    xiaoMing.age=19;
    xiaoMing.name="xiaoming";
    xiaoMing.birthday = initalDate(1990,10,10,10);
    showBirth(xiaoMing.birthday);

    return 0;
}
