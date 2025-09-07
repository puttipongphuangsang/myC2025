#include "stdio.h"

int main(){
    //ประกาศตัวแปล (Declare variable)
    double money, money_share;
    int person;

    printf("===================\n");
    printf("\tMoney Share\n");
    printf("===================\n");
    printf("Input money: ");
    scanf("%lf", &money);
    printf("Input person: ");
    scanf("%d", &person);
    money_share = money / person;
    printf("===================\n");
    printf("Money per person: %2lf Baht\n" , money_share);
    printf("===================\n");


    return 0;
}