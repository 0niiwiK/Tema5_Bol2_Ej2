#include <stdio.h>
#define FIL 3
#define COL 6
#define NULL -999

void imprimeMatriz(int m[][COL]);
void insertaMatrizIniciada(int m[][COL]);

int main() {
    int num[FIL][COL] ={
            {0,30,2,NULL,NULL,5},
            {75,NULL,NULL,NULL,0,NULL},
            {NULL,NULL,-2,9,NULL,11}};
    imprimeMatriz(num);
    return 0;
}

void imprimeMatriz(int m[][COL]){
    int num;
    printf("\nArray num | Col 0 | Col 1 | Col 2 | Col 3 | Col 4 | Col 5 |\n          |-------|-------|-------|-------|-------|-------|\n");
    for (int i = 0; i < FIL; ++i) {
        printf(" Fila: %d  |",i);
        for (int j = 0; j < COL; ++j) {
            num=m[i][j];
            if (num!=NULL)
                printf("%4d   |",num);
            else
                printf("       |",num);
        }
        printf("\n          |-------|-------|-------|-------|-------|-------|\n");
    }
}
