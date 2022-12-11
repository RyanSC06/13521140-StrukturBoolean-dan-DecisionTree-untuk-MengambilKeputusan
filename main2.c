#include <stdio.h>
#include "bintree.h"

int main() {
    /* KAMUS */
    BinTree beli_minuman, kiri, kanan;
    
    /* ALGORITMA */
    kiri = newTreeNode('M');
    LEFT(kiri) = newTreeNode('O');
    RIGHT(kiri) = newTreeNode('D');
    LEFT(LEFT(kiri)) = newTreeNode('D');
    RIGHT(LEFT(kiri)) = newTreeNode('D');
    LEFT(RIGHT(kiri)) = newTreeNode('F');
    RIGHT(RIGHT(kiri)) = newTreeNode('T');
    LEFT(LEFT(LEFT(kiri))) = newTreeNode('F');
    RIGHT(LEFT(LEFT(kiri))) = newTreeNode('T');
    LEFT(RIGHT(LEFT(kiri))) = newTreeNode('F');
    RIGHT(RIGHT(LEFT(kiri))) = newTreeNode('G');
    LEFT(LEFT(RIGHT(kiri))) = newTreeNode('T');
    RIGHT(LEFT(RIGHT(kiri))) = newTreeNode('E');
    LEFT(LEFT(LEFT(LEFT(kiri)))) = newTreeNode('T');
    RIGHT(LEFT(LEFT(LEFT(kiri)))) = newTreeNode('E');
    LEFT(LEFT(RIGHT(LEFT(kiri)))) = newTreeNode('G');
    RIGHT(LEFT(RIGHT(LEFT(kiri)))) = newTreeNode('C');
    
    kanan = newTreeNode('K');
    
    CreateTree('B', kiri, kanan, &beli_minuman);
    
    keputusan(beli_minuman);
}

