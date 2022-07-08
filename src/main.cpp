#include <stdio.h>
#include <fstream>
#include "rds.h"

int main() {
    std::ifstream file("../rds_example_bits.bin", std::ios::in | std::ios::binary | std::ios::ate);
    int flen = file.tellg();
    file.seekg(file.beg);
    uint8_t* bits = new uint8_t[flen];
    file.read((char*)bits, flen);
    file.close();

    rds::RDSDecoder decoder;
    decoder.process(bits, flen);

    return 0;
}