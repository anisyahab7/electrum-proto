#include "electrum-proto/wallet.h"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc > 1 && std::string(argv[1]) == "--help") {
        std::cerr << "electrum-proto [name]\n";
        return 0;
    }
    std::string name = argc > 1 ? argv[1] : "default";
    auto v = electrumpp::create_vault(name, "demo");
    std::cout << v.id << " " << v.accounts[0].address << "\n";
    return 0;
}
