#include "stdio.h" //หรือ <stdio.h>

int main(){
    //python ===>>>> name = input('Enter your name: ')
    // %s ของ linux ไม่ต้องใส่ &

    //ป้อนชื่อ ป้อนอายุ
    //declare variable
    char name[50];
    int age; //long int

    int n1 , n2 , n3;
    
    scanf("%d %d %d" , &n1, &n2, &n3);
    printf("%d %d %d\n" , n1, n2, n3);
    
    printf("Enter your name: ");
    scanf("%s" , name); // %s ของ linux ไม่ต้องใส่ & ถ้า windows ต้องใส &name
    printf("Enter your age: ");
    scanf("%d" , &age);
    printf("========================\n");
    printf("Hello....%s\n" , name);
    printf("Your age is %d\n" , age);


    return 0;
}