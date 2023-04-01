//
// Created by polcraz on 01.04.2023.
//

#ifndef TEST_CHAIN_BLOCKCHAIN_H
#define TEST_CHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();
    void AddBlock(Block bNew);
private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif //TEST_CHAIN_BLOCKCHAIN_H
