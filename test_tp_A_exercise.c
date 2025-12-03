#include <stdio.h>
#include <stdbool.h>

int main() {
    bool is_prime = true;
    int maybe_code, A, B, C, D, E, sum, BDEC, i;
    maybe_code = A = B = C = D = E = sum = BDEC = i = 0;


    // since the least square number that results a 5 digit number is 100 we can directly skip numbers from 0-99 same thing goes with upper limit 316
    for (int n = 0; n <= 1000; n++) {
        maybe_code = n * n; // ABCDE


        // suposse a num = 58962 
        // num % 10; will always give the number in the first position (2)
        // num / 10; (integer division) will always remove the number in first position (2)
        // we use / and % to get the values of B-C-D-E
        // extract the ten's of thousands A = (58962 / 10000) = 5
        A = maybe_code / 10000;
        // extract the thousands B = (58962 / 1000) % 10 =====> B = 58 % 10 =====> B = 8
        B = (maybe_code / 1000) % 10;
        // extract the hundreds C = (58962 / 100) % 10 =====> C = 589 % 10 =====> C = 9
        C = (maybe_code / 100) % 10;
        // extract the tens  D = (58962 / 10) % 10 =====> D = 5896 % 10 =====> D = 6
        D = (maybe_code / 10) % 10;
        // extract the units E = 58962 % 10 =====> E = 2
        E = maybe_code % 10;

        // Check sum of digits = 27
        sum = A + B + C + D + E;
        if (sum != 27) 
            continue;

        // Check B < D < E < C
        // we check for the false value ( non increasing order )
        if (!(B < D && D < E && E < C)) 
            continue;

        // make the BDEC number
        BDEC = B * 1000 + D * 100 + E * 10 + C;

        // Check BDEC is prime
        // for a number to be prime the remainder must be non 0 for all numbers between 1 and this number
        // more advanced: (we can check from 1 to the square root of the number)
        // we set a flag and we suppose every number is a prime number untill we find a remained 0 then we declare otherwise
        is_prime = 1;
        // we can check only untill square root of BDEC i < square_root(BDEC)
        // in other words we can check when i * i < BDEC
        for (i = 2; i < BDEC; i++) {
            if (BDEC % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (!is_prime) continue;

        // Found
        printf("Code: %d\n", maybe_code);
        return 0;
    }
    return 0;
}