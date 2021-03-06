#include<math.h>

#include "kaprekarUtils.h"

/**
 * <p>This function tests whether the given input <code>n</code>
 * is a Kaprekar Number or not.  A Kaprekar Number is a non-negative
 * integer n whose square can be split into two positive integers 
 * whose sum is equal to the original number.  For the purposes of 
 * this method, we restrict our consideration to base-10 representations.</p>
 * 
 * For example, 45 is a Kaprekar number, because 
 *   45<sup>2</sup> = 2025 
 * and 
 *   20 + 25 = 45. 
 * 
 * <p>See Wikipedia's  
 * <a href="https://en.wikipedia.org/wiki/Kaprekar_number">Kaprekar Number</a>
 * article for more information.</p>
 * 
 * @param n
 * @return <code>true</code> if <code>n</code> is a Kaprekar Number, 
 * <code>false</code> otherwise.
 */
 
 int isKaprekar(int n)
 {
  if(n < 1) {
    return 0; //change to return 0 to end program
  }

  int i;
  long square = (long) n * (long) n; //add a long for the input of n
  int numberOfDigits = (int) log10(square) + 1; //add square in the parenthesis, incorrect spelling of numberOfDigits
  long modulus = 1; //incorrect spelling 
  long first, second;
  for(i=1; i<=numberOfDigits; i++) {//incorrect spelling of variable
    modulus *= 10;
    first = square / modulus;
    second = square % modulus;
    if(second > 0 && first + second == n) {
      return 1;
    }
  }
  return 0;
  
}
//The commit command wouldn't allow me to enter comments to the code. It was dark, and wouldn't submit like it should. 
//I wrote comments directly into the code, and made the appropriate changes to the code to make it run correctly.
