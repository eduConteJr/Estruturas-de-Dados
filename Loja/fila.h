#ifndef FILA_H
#define FILA_H
#define MAX 100

#include <iostream>
#include <string.h>

class fila{
    public:
        int i, f, produto[];

        fila(){
            i = 0;
            f = i;
            produto[MAX];
        }

        bool enfileira(int enf, int a){
            if(((f+1) % MAX )== i){
                return false;
            }


            produto[f] = a;
            f = (f+1) % MAX;
            return true;
        }
        bool desenfileira(int *x=NULL){
            if (i == f){
                return false;
            }
            if (x!=NULL){
                *x = produto[i];
            }
            i=(i+1) % MAX;
            return true;
        }

        int getI(){
            return i;
        }

        int getF(){
            return f;
        }
        int getMax(){
            return MAX;
        }


        int getVenda(int p){
            return produto[p];
        }
};

#endif
