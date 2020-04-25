#include <stdio.h>

enum Numbers {
    ONE = 1,
    TWO = 2,
    Three = 3,
    Four = 4,
    Five = 5
};

enum Values {
    Val1 = 101,
    Val2 = 82,
    Val3 = 19,
    Val4 = 42,
    Val5 = 30,
};

enum week {Mon, Tues, Wednes};

int main() {
    printf("Aritmetic Operations\n");
    printf("ONE + Val1 = %d\n",  (ONE + Val1));
    printf("Val2 - TWO = %d\n", (Val2 - TWO));
    printf("Three * Val3 = %d\n", (Three * Val3));
    printf("Val4 modulus Four = %d\n", (Val4 % Four));
    printf("Val5 / Five = %d\n", (Val5 / Five));
    printf("\n\n");

    printf("Relational Operators\n");
    printf("Val1 == 101 = %d\n", (Val1 == 101));
    printf("Val2 != 82 =%d\n", (Val2 != 82));
    printf("Val3 < 100 = %d\n", (Val3 < 100));
    printf("Val4 > 50 = %d\n", (Val4 > 30));
    printf("Val5 <= 35 = %d\n", (Val5 <= 35));
    printf("\n\n");

    printf("Bitwise Operators\n");
    printf("ONE | TWO = %d\n", (ONE | TWO));
    printf("FOUR ^ TWO = %d\n", (Four ^ TWO));
    printf("THREE & FIVE = %d\n", (Three & Five));

    return 0;
}

