#include "electrum-proto/wallet.h"

#include <iostream>

#define CHECK(cond)                                                          \
    do {                                                                     \
        if (!(cond)) {                                                       \
            std::cerr << "fail: " #cond "\n";                                \
            return 1;                                                        \
        }                                                                    \
    } while (0)

int main() {
    auto v = electrumpp::create_vault("test", "pw");
    CHECK(v.name == "test");
    CHECK(v.accounts.size() == 1);
    electrumpp::add_account(v, "A");
    electrumpp::add_account(v, "B");
    CHECK(v.accounts.size() == 3);
    CHECK(v.accounts[0].address != v.accounts[1].address);
    CHECK(!electrumpp::coin().empty());
    std::cout << "ok\n";
    return 0;
}
