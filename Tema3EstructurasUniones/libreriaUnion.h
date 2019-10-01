//
// Created by Ivan's PC on 10/1/2019.
//

#ifndef ISC105_LIBRERIAUNION_H
#define ISC105_LIBRERIAUNION_H

struct byte{
        unsigned int a: 1;
        unsigned int b: 1;
        unsigned int c: 1;
        unsigned int d: 1;
        unsigned int e: 1;
        unsigned int f: 1;
        unsigned int g: 1;
        unsigned int h: 1;
};

union charbits {
    char ch;
    struct byte bits;
};

void decodifica(struct byte b, char c);

#endif //ISC105_LIBRERIAUNION_H
