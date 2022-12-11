#include <stdio.h>
#include "boolean.h"

boolean GULA (boolean beli, boolean manis, boolean obesitas, boolean dingin, boolean flu);
boolean GULA (boolean beli, boolean manis, boolean obesitas, boolean dingin, boolean flu) {
    return ( AND(NOT(obesitas), AND(beli, manis)) );
}

boolean ES (boolean beli, boolean manis, boolean obesitas, boolean dingin, boolean flu);
boolean ES (boolean beli, boolean manis, boolean obesitas, boolean dingin, boolean flu) {
    return ( AND(NOT(flu), AND(beli, dingin)) );
}

boolean KELUAR (boolean beli, boolean manis, boolean obesitas, boolean dingin, boolean flu);
boolean KELUAR (boolean beli, boolean manis, boolean obesitas, boolean dingin, boolean flu) {
    return ( NOT(beli) );
}

int main() {
    int i = 5;
    int input[i];
    boolean gula, es, keluar;
    
    printf("Urutan masukan (0/1):\n");
    printf("BELI MANIS OBESITAS DINGIN FLU: ");
    for (int x = 0; x < i; x++) {
        scanf("%d", &input[x]);
    }
    
    gula = GULA (input[0], input[1], input[2], input[3], input[4]);
    es = ES (input[0], input[1], input[2], input[3], input[4]);
    keluar = KELUAR (input[0], input[1], input[2], input[3], input[4]);
    
    printf("\nGULA | ES | KELUAR\n");
    printf("  %d  |  %d |    %d\n", gula, es, keluar);
}

