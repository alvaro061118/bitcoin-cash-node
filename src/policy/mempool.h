// Copyright (c) 2020 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_POLICY_MEMPOOL_H
#define BITCOIN_POLICY_MEMPOOL_H

/** Default for -limitancestorcount, max number of in-mempool ancestors */
static const unsigned int DEFAULT_ANCESTOR_LIMIT = 25;
/**
 * Default for -limitancestorsize, maximum kilobytes of tx + all in-mempool
 * ancestors.
 */
static const unsigned int DEFAULT_ANCESTOR_SIZE_LIMIT = 101;
/** Default for -limitdescendantcount, max number of in-mempool descendants */
static const unsigned int DEFAULT_DESCENDANT_LIMIT = 25;
/**
 * Default for -limitdescendantsize, maximum kilobytes of in-mempool
 * descendants.
 */
static const unsigned int DEFAULT_DESCENDANT_SIZE_LIMIT = 101;

#endif // BITCOIN_POLICY_MEMPOOL_H
