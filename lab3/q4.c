#include <stdio.h>
typedef union complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

complex sub(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}

void main() {
    complex n1, n2, result;
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("For 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
    printf("\n");
    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    printf("\n");
    result = sub(n1, n2);
    printf("Diff  = %.1f + %.1fi", result.real, result.imag);
    printf("\n");
}

//gcc q3.c && ./a.out
