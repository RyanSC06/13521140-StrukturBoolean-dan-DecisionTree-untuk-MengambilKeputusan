/* DEFINISI TIPE BOOLEAN */
#ifndef _BOOLEAN_h
#define _BOOLEAN_h
/* --------------------- */
#define boolean unsigned char
#define true 1
#define false 0

/* DEKLARASI FUNGSI BOOLEAN */
boolean AND (boolean A, boolean B);
    /* Mengembalikan hasil operasi boolean A.B */
boolean OR (boolean A, boolean B);
    /* Mengembalikan hasil operasi boolean A+B */
boolean NOT (boolean A);
    /* Mengembalikan hasil boolean A' */
boolean XOR (boolean A, boolean B);
    /* Mengembalikan hasil operasi boolean A XOR B */
boolean NAND (boolean A, boolean B);
    /* Mengembalikan hasil operasi boolean (A.B)' */
boolean NOR (boolean A, boolean B);
    /* Mengembalikan hasil operasi boolean (A+B)' */
boolean XNOR (boolean A, boolean B);
    /* Mengembalikan hasil operasi boolean (A XOR B)' */

#endif

