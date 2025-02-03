#include <stdio.h>
#include <stdlib.h>

#define PI 3.13159
#define MAX(a,b) ( (a)> (b) ? (a) : (b) )
#define mu_assert(message, test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test) do { char *message = test(); tests_run++; if (message) return message; } while (0)

int main(){

    return 0;
}