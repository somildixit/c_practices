#include <stdio.h>

int productOfThree(int no1, int no2, int no3){
    return no1 * no2 * no3;
}

int main( )
{
    int no1,no2,no3;
    no1 = 12;
    no2 = 25;
    no3 = 99;
    printf("Product : %d", productOfThree(no1,no2,no3));
    return 0;
}
