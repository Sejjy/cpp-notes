#include<iostream>

int main() {

    // 'for' loop
    for(int i = 1; i < 11; i++) {
        std::cout << i << std::endl;
    }

    // int i = 1;     declare i as integer equal to 1
    // i < 11;        loop as long as this expression is true
    // i++            add 1 to i each loop

    // std::cout << i     (standard c-out) prints the first value of i which is 1 as it is declared (int i = 0)
    /* << std::endl       (standard end line) basically ends the line and moves the cursor on a new line
                           so that the next value of i is printed below the previous one. */
  
    // now that the value of i is incremented by 1, the next time it prints i, it will print 2.
    // it will loop as long as i is less than 11 which means it will loop 10 times, printing the numbers 1 to 10.
}