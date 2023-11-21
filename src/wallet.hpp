#include <cstdint>
#include <string>
#include <array>

#include "defs.hpp"
#include "defs.hpp"

#pragma once

struct Wallet {
    Ed25519Key priv_key;
    Ed25519Key pub_key;
};

Wallet create_wallet();
void display_wallet(Wallet& wallet);
bool load_wallet(Wallet& wallet);
bool store_wallet(Wallet& wallet);
int query_balance(std::string blockchain_node);