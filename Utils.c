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
        
        uint8_t u8 = p[i];
        
        if (u8 < 0x10) {
            printf("0%x", u8);
        } else {
            printf("%x", u8);
        }
        
        if (i != 0 && i != len && (i+1) % 4 == 0) {
            printf(" ");
        }
        
        if (i == len - 1) {
            printf(">");
        }
    }
}
