#include <stdio.h>
#include "bintree.h"
#include <stdlib.h>

BinTree NewTree (ElType root, BinTree left_tree, BinTree right_tree) {
    /* Mengembalikan sebuah pohon biner dari root, left_tree, dan right_tree */
/* KAMUS LOKAL */
    Address p;
/* ALGORITMA */
    p = (Address) malloc (sizeof(TreeNode));
    if (p != NULL) {
        ROOT(p) = root;
        LEFT(p) = left_tree;
        RIGHT(p) = right_tree;
    }
    
    return (p);
}

void CreateTree (ElType root, BinTree left_tree, BinTree right_tree, BinTree *p) {
    /* I.S. Sembarang
       F.S. Terbentuk sebuah pohon biner p dari root, left_tree, dan right_tree */
/* KAMUS LOKAL */
    /* - */
/* ALGORITMA */
    *p = NewTree(root, left_tree, right_tree);
}

Address newTreeNode(ElType val) {
    /* Mengembalikan Address p hasil lokasi sebuah simpul pohon
       p↑.info=val, p↑.left=NULL, p↑.right=NULL */
/* KAMUS LOKAL */
    Address p;
/* ALGORITMA */
    p = (Address) malloc (sizeof(TreeNode));
    if (p != NULL) {
        ROOT(p) = val;
        LEFT(p) = NULL;
        RIGHT(p) = NULL;
    }
    
    return (p);
}

boolean isTreeEmpty (BinTree p) {
    /* Mengirimkan true jika p adalah pohon biner yang kosong */
/* KAMUS LOKAL */
    /* - */
/* ALGORITMA */
    return (p == NULL);
}

boolean isOneElmt (BinTree p) {
    /* Mengirimkan true jika p tidak kosong dan hanya terdiri atas 1 elemen */
/* KAMUS LOKAL */
    /* - */
/* ALGORITMA */
    if (p != NULL) {
        return ((LEFT(p) == NULL) && (RIGHT(p) == NULL));
    } else {
        return (0);
    }
}

/* ****** Display ***** */
void PrintTree2(BinTree p, int h, int current_indent);
void PrintTree2(BinTree p, int h, int current_indent) {
    if (isTreeEmpty(p) == 0) {
        printf("%*s%d\n", current_indent, "", ROOT(p));
        PrintTree2(LEFT(p), h, current_indent + h);
        PrintTree2(RIGHT(p), h, current_indent + h);
    }
}

void printTree(BinTree p, int h) {
    /* I.S. p terdefinisi, h adalah jarak indentasi (spasi) */
    /* F.S. Semua simpul p sudah ditulis dengan indentasi (spasi) */
/* KAMUS LOKAL */
    /* - */
/* ALGORITMA */
    PrintTree2(p, h, 0);
}

void printRoot(BinTree p) {
    if (ROOT(p) == 'B') {
        printf("Apakah Anda ingin beli minuman?");
    } else if (ROOT(p) == 'M') {
        printf("Apakah Anda suka hidangan manis?");
    } else if (ROOT(p) == 'O') {
        printf("Apakah Anda menderita obesitas?");
    } else if (ROOT(p) == 'D') {
        printf("Apakah Anda suka hidangan dingin?");
    } else if (ROOT(p) == 'F') {
        printf("Apakah Anda sedang menderita flu?");
    } else if (ROOT(p) == 'T') {
        printf("Tidak pakai gula dan es.");
    } else if (ROOT(p) == 'G') {
        printf("Pakai gula saja.");
    } else if (ROOT(p) == 'E') {
        printf("Pakai es saja.");
    } else if (ROOT(p) == 'C') {
        printf("Pakai gula dan es.");
    } else if (ROOT(p) == 'K') {
        printf("Keluar karena tidak beli.");
    }
}

void keputusan(BinTree p) {
    /* Mengembalikan sebuah keputusan berdasarkan pohon p dan masukan pengguna */
/* KAMUS LOKAL */
    int i;
/* ALGORITMA */
    if (isOneElmt(p)) {
        printf("\nHasil: ");
        printRoot(p);
    }
    else {
        printRoot(p);
        printf("\nMasukan Anda (0/1): ");
        scanf("%d", &i);
        printf("\n");
        if (i == 0) {
            keputusan(RIGHT(p));
        } else {
            keputusan(LEFT(p));
        }
    }
}