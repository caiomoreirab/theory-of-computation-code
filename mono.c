//Algoritmos Monolíticos - Caio Bandeira Moreira
//Lista 01 - Teoria da Computação

#define F
#define G
#define T1 0
#define T2 1

#define faca(op)     op;
#define va_para(r)  goto r;
#define se(t)       if(t)
#define entao
#define senao       else
#define r0  r1

//***************************************************************************************************************************************
// 1* a) Fatorial
int main() {
    int i = 1;
    int n = 5;
    int f = 1;

    goto r0;

  r1: se(i>n) entao va_para(r4) senao va_para(r2)
  r2: faca(f = f * i)va_para(r3);
  r3: faca(i +=  1)va_para(r1);
  r4: printf("Fatorial = %d\n", f);

    return 0;
}


//***************************************************************************************************************************************

#define faca(op)     op;
#define va_para(r)  goto r;
#define se(t)       if(t)
#define entao
#define senao       else
#define r0  r1

//***************************************************************************************************************************************
//2* a) Raiz Quadrada


int main() {
  float n;
  float x = n; 
  float y = 1;
  float a = 0.000001;
  
  goto r0;

  r1: se((x-y) <= a) entao va_para(r4) senao va_para(r2);
  r2: faca(x = ((x+y) / 2)) va_para(r3);
  r3: faca(y = (n/x)) va_para(r1);
  r4: printf("Raiz = %f\n", x)
    return 0;

}

