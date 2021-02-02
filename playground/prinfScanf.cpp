#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    /*
        Int ("%d"): 32 Bit integer
        Long ("%ld"): 64 bit integer
        Char ("%c"): Character type
        Float ("%f"): 32 bit real value
        Double ("%lf"): 64 bit real value
    */
    int integer;
    long longnumber;
    char character;
    float floatnumber;
    double doublenumber;
    
    scanf("%d %ld %c %f %lf", &integer, &longnumber, &character, &floatnumber, &doublenumber);
    printf("%d\n%ld\n%c\n%f\n%lf\n", integer, longnumber, character, floatnumber, doublenumber);
    return 0;
}