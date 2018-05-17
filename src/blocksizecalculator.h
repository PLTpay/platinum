// Copyright (c) 2017 Eugene Fillippovsky
// Copyright (c) 2017 The Platinum developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef blocksizecalculator_h
#define blocksizecalculator_h

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "main.h"
#include "util.h"
#include "clientversion.h"

using namespace std;

namespace BlockSizeCalculator {
    unsigned int ComputeBlockSize(CBlockIndex*, unsigned int pastblocks = NUM_BLOCKS_FOR_MEDIAN_BLOCK);
    inline unsigned int GetMedianBlockSize(CBlockIndex*, unsigned int pastblocks = NUM_BLOCKS_FOR_MEDIAN_BLOCK);
    inline std::vector<unsigned int> GetBlockSizes(CBlockIndex*, unsigned int pastblocks = NUM_BLOCKS_FOR_MEDIAN_BLOCK);
    inline int GetBlockSize(CBlockIndex*);
}
#endif