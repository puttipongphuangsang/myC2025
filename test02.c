#include <stdio.h>

// การใช้ standard/built-in function ใน c ต้องรู้ว่าอยู่ใน Library file (.h) อะไรแล้วต้อง #include
//printf("_______");
//scanf("__",$___);
// '_' ใน c คืออักษรตัวเดียว
// "_" ใน c คือข้อความ (ตัวอักษรตั้งแต่ 0 ตัวขึ้นไป)

int main(){

    printf("AAAAAA");
    printf("%s BBBBBB %d", "CCC", 100); //integer(int)
    printf("XYZ %f ^_^ %lf" , 150.45, 158.45687987); //float, double
    printf("ABCD %c %s", 'B', "");

    return 0;
}