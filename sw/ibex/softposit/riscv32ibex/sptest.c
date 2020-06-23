#include "softposit.h"
#include "simple_system_common.h"

//Test Softposit

int main (int argc, char *argv[]){

    posit_2_t pA[8] = {0x33330000, 0x33330000, 0x33330000, 0x33330000, 0x33330000, 0x33330000, 0x33330000, 0x33330000};
    posit_2_t pB[8] = {0x44440000, 0x44440000, 0x44440000, 0x44440000, 0x44440000, 0x44440000, 0x44440000, 0x44440000};

    for(int i = 0; i < 8; i++){
     puthex(pX2_add(pA[i], pB[i], 16).v);
     puts("\n");
    }

    return 0;

}
