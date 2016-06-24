//
//  Utils.c
//
//  Created by 成杰 on 16/6/17.
//

#include "Utils.h"

void printHex(const void * const ptr, const unsigned len)
{
    unsigned char * p = (unsigned char *)ptr;
    
    for (int i = 0; i < len; ++i) {
        
        if (i == 0) {
            printf("<");
        }
        
        unsigned char uc = p[i];
        
        if (uc < 0x10) {
            printf("0%x", uc);
        } else {
            printf("%x", uc);
        }
        
        if (i != 0 && i != len-1 && (i+1) % 4 == 0) {
            printf(" ");
        }
        
        if (i == len - 1) {
            printf(">");
        }
    }
}
