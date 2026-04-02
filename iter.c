//Algoritmos Iterativos - Caio Bandeira Moreira
//Lista 01 - Teoria da Computação

#define V
#define W
#define T1 1
#define T2 1
#define T3 1

#define se(t)         if(t)
#define entao
#define senao         else

#define enquanto(t)   while(t)
#define faca
#define ate(t)        while(!t)

//***************************************************************************************************************************************
// 1* a) Fatorial

int main() {
    int n = 5;
    int i = 1;
    int f = 1;

    se(1)
    entao enquanto(i <= n) faca {
        f = f * i;
        i = i + 1;
    }
    senao ;

    printf("Fatorial = %d\n", f);

    return 0;
}


//***************************************************************************************************************************************
// 1* b) Raiz Quadrada


int main() {
    float n = 9;
    float x = n;
    float y = 1;
    float a = 0.000001;

    se(1)
    entao enquanto((x - y) > a) faca {
        x = (x + y) / 2;
        y = n / x;
    }
    senao ;

    printf("Raiz = %f\n", x);

    return 0;
}

