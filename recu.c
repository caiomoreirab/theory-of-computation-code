//Algoritmos Recursivos - Caio Bandeira Moreira
//Lista 01 - Teoria da Computação


//***************************************************************************************************************************************
// 1* a) Fatorial

#include <stdio.h>

#define se(t)       if(t)
#define entao
#define senao       else

#define P int main()
#define e
#define def
#define onde

int n = 5;
int i = 1;
int f = 1;

P e { R(); printf("Fatorial = %d\n", f); } onde

R() def {
    se(i <= n)
    entao {
        f = f * i;
        i = i + 1;
        R();
    }
    senao ;
}


//***************************************************************************************************************************************
// 1* b) Raiz Quadrada


#include <stdio.h>

#define se(t)       if(t)
#define entao
#define senao       else

#define P int main()
#define e
#define def
#define onde

float n = 9;
float x;
float y;
float a = 0.000001;

P e {
    x = n;
    y = 1;
    R();
    printf("Raiz = %f\n", x);
} onde

R() def {
    se((x - y) > a)
    entao {
        x = (x + y) / 2;
        y = n / x;
        R();
    }
    senao ;
}


