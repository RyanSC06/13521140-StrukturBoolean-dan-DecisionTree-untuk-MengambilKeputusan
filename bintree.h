#ifndef POHONBINER_H
#define POHONBINER_H

#include "boolean.h"

/* Selektor */
#define ROOT(p) (p)->info
#define LEFT(p) (p)->left
#define RIGHT(p) (p)->right

typedef char ElType;
typedef struct treeNode* Address;
typedef struct treeNode { 
     ElType info;
     Address left;
     Address right;
} TreeNode;

/* DEFINISI */
/* Pohon biner kosong: p = NULL */
/* Representasi Address dengan pointer */
/* ElType adalah string */

typedef Address BinTree;

/* DEKLARASI FUNGSI DAN PROSEDUR */
BinTree NewTree (ElType root, BinTree left_tree, BinTree right_tree); 
/* Mengembalikan sebuah pohon biner dari root, left_tree, dan right_tree */

void CreateTree (ElType root, BinTree left_tree, BinTree right_tree, BinTree *p);
/* I.S. Sembarang
   F.S. Terbentuk sebuah pohon biner p dari root, left_tree, dan right_tree */

Address newTreeNode(ElType val);
/* Mengembalikan Address p hasil lokasi sebuah simpul pohon
   p↑.info=val, p↑.left=NULL, p↑.right=NULL */

boolean isTreeEmpty (BinTree p);
/* Mengirimkan true jika p adalah pohon biner yang kosong */

boolean isOneElmt (BinTree p);
/* Mengirimkan true jika p tidak kosong dan hanya terdiri atas 1 elemen */

void printTree(BinTree p, int h);
/* I.S. p terdefinisi, h adalah jarak indentasi (spasi) */
/* F.S. Semua simpul p sudah ditulis dengan indentasi (spasi) */

void keputusan(BinTree p);
/* Mengembalikan sebuah keputusan berdasarkan pohon p dan masukan pengguna */

#endif

