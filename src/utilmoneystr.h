// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Btcnano Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Money parsing/formatting utilities.
 */
#ifndef BTCNANO_UTILMONEYSTR_H
#define BTCNANO_UTILMONEYSTR_H

#include <cstdint>
#include <string>

#include "amount.h"

std::string FormatMoney(const Amount &n);
bool ParseMoney(const std::string &str, Amount &nRet);
bool ParseMoney(const char *pszIn, Amount &nRet);

#endif // BTCNANO_UTILMONEYSTR_H
