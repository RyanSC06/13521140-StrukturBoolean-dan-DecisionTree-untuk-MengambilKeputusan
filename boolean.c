#include "boolean.h"

/* IMPLEMENTASI FUNGSI BOOLEAN */
boolean AND (boolean A, boolean B) {
    return (A && B);
}

boolean OR (boolean A, boolean B) {
    return (A || B);
}

boolean NOT (boolean A) {
    return (!A);
}

boolean XOR (boolean A, boolean B) {
    if (A == B) {
        return (0);
    } else {
        return (1);
    }
}

boolean NAND (boolean A, boolean B) {
    return (NOT(AND(A,B)));
}

boolean NOR (boolean A, boolean B) {
    return (NOT(OR(A,B)));
}

boolean XNOR (boolean A, boolean B) {
    return (NOT(XOR(A,B)));
}