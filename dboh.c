/* 
  @file        dboh.c
  @brief       It converts decimal, binary, octal and hexadecimal numbers according to choice. 
  @copyright   (c) 2005 Abhishek Kumar
  @license     GNU General Public Licence v3.0
*/

#include <stdio.h>

int main() {
  int j, i, n, s, d, c, p, k, b[30], o[60], h[50];
  char A='A', B='B', C='C', D='D', E='E', F='F';
  unsigned int x, xn;

  printf("\nEnter any one for conversion");
  printf("\n1. For decimal to binary, octal, hexadecimal");
  printf("\n2. For binary to decimal, octal, hexadecimal");
  printf("\n3. For octal to binary, decimal, hexadecimal");
  printf("\n4. For hexadecimal to decimal, octal, binary\n");
  scanf("%d", &s);
  switch (s) {
    case 1: {
      printf("\nEnter the decimal number\n");
      scanf("%d", &d);
      i = 0;
      n = d;
      while (n > 0) {
        b[i] = n % 2;
        n = n / 2;
        i++;
      }
      i--;
      printf("\nBinary: ");
      for (j = i; j >= 0; j--)
        printf("%d", b[j]);
      i = 0;
      n = d;
      while (n > 0) {
        o[i] = n % 8;
        n = n / 8;
        i++;
      }
      i--;
      printf("\nOctal: ");
      for (j = i; j >= 0; j--)
        printf("%d", o[j]);
      i = 0;
      n = d;
      while (n > 0) {
        h[i] = n % 16;
        n = n / 16;
        i++;
      }
      i--;
      printf("\nHexadecimal: ");
      for (j = i; j >= 0; j--)
        if (h[j] < 10)
          printf("%d", h[j]);
        else {
          if (h[j] == 10)
            printf("%c", A);
          if (h[j] == 11)
            printf("%c", B);
          if (h[j] == 12)
            printf("%c", C);
          if (h[j] == 13)
            printf("%c", D);
          if (h[j] == 14)
            printf("%c", E);
          if (h[j] == 15)
            printf("%c", F);
        }
      break;
    }

    case 2: {
      printf("\nEnter the binary number\n");
      scanf("%d", &c);
      i = 0;
      n = c;
      while (n > 0) {
        b[i] = n % 10;
        n = n / 10;
        i++;
      }
      i--;
      p = 1;
      d = 0;
      for (j = 0; j <= i; j++) {
        d = d + b[j] * p;
        p = p * 2;
      }
      printf("\nDecimal: %d", d);
      i = 0;
      n = d;
      while (n > 0) {
        o[i] = n % 8;
        n = n / 8;
        i++;
      }
      i--;
      printf("\nOctal: ");
      for (j = i; j >= 0; j--)
        printf("%d", o[j]);
      i = 0;
      n = d;
      while (n > 0) {
        h[i] = n % 16;
        n = n / 16;
        i++;
      }
      i--;
      printf("\nHexadecimal: ");
      for (j = i; j >= 0; j--)
        printf("%d", h[j]);
      break;
    }

    case 3: {
      printf("\nEnter the octal number\n");
      scanf("%d", &k);
      i = 0;
      n = k;
      while (n > 0) {
        b[i] = n % 10;
        n = n / 10;
        i++;
      }
      i--;
      p = 1;
      d = 0;
      for (j = 0; j <= i; j++) {
        d = d + b[j] * p;
        p = p * 8;
      }
      printf("\nDecimal: %d", d);
      i = 0;
      n = d;
      while (n > 0) {
        b[i] = n % 2;
        n = n / 2;
        i++;
      }
      i--;
      printf("\nBinary: ");
      for (j = i; j >= 0; j--)
        printf("%d", b[j]);
      i = 0;
      n = d;
      while (n > 0) {
        h[i] = n % 16;
        n = n / 16;
        i++;
      }
      i--;
      printf("\nHexadecimal: ");
      for (j = i; j >= 0; j--)
        printf("%d", h[j]);
      break;
    }

    case 4: {
      printf("\nEnter the hexadecimal number\n");
      scanf("%x", &x);
      i = 0;
      xn = x;
      while (xn > 0) {
        b[i] = xn % 16;
        xn = xn / 16;
        i++;
      }
      i--;
      p = 1;
      d = 0;
      for (j = 0; j <= i; j++) {
        d = d + b[j] * p;
        p = p * 16;
      }
      printf("\nDecimal: %d", d);
      i = 0;
      n = d;
      while (n > 0) {
        o[i] = n % 8;
        n = n / 8;
        i++;
      }
      i--;
      printf("\nOctal: ");
      for (j = i; j >= 0; j--)
        printf("%d", o[j]);
      i = 0;
      n = d;
      while (n > 0) {
        b[i] = n % 2;
        n = n / 2;
        i++;
      }
      i--;
      printf("\nBinary: ");
      for (j = i; j >= 0; j--)
        printf("%d", b[j]);
      break;
    }
  }
  return 0;
}
