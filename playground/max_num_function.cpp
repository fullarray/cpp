#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    
    int number = 0;
    int number1 = 0;
    int max = 0;
    
    if(a>b){
        number = a;
    }else{
        number = b;
    }
    
    if(c>d){
        number1 = c;
    }else{
        number1 = d;
    }
    
    if(number > number1){
        max = number;
    }else{
        max = number1;
    }
    
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}