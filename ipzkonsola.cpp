#include <iostream>
#include <vector>
#include <bitset>

std::bitset<32> ipToBitset(std::string ip) {
    std::bitset<32> ipBitset;
    int octet = 0;
    int shift = 24;

    for (char c : ip) {
        if (c == '.') {
            ipBitset |= (octet << shift);
            octet = 0;
            shift -= 8;
        } else {
            octet = octet * 10 + (c - '0');
        }
    }

    ipBitset |= (octet << shift);

    return ipBitset;
}

std::bitset<32> maskToBitset(int mask) {
    std::bitset<32> maskBitset;

    for (int i = 0; i < mask; i++) {
        maskBitset.set(31 - i);
    }

    return maskBitset;
}

std::bitset<32> getNetworkAddress(std::bitset<32> ip, std::bitset<32> mask) {
    return ip & mask;
}

std::bitset<32> getBroadcastAddress(std::bitset<32> networkAddress, std::bitset<32> mask) {
    std::bitset<32> inverseMask = ~mask;
    return networkAddress | inverseMask;
}

void printDecimalFormat(std::bitset<32> address) {
    for (int i = 0; i < 4; i++) {
        std::cout << address.to_ulong() % 256;
        if (i != 3) {
            std::cout << ".";
        }
        address >>= 8;
    }
}

int main() {
    std::string ip;
    std::cout << "Podaj IP ";
    std::cin >> ip;
    int mask = 25;

    

    std::bitset<32> ipBitset = ipToBitset(ip);
    std::bitset<32> maskBitset = maskToBitset(mask);

    std::bitset<32> networkAddress = getNetworkAddress(ipBitset, maskBitset);
    std::cout << "Network Address: ";
    printDecimalFormat(networkAddress);
    std::cout << "\n";

    std::bitset<32> broadcastAddress = getBroadcastAddress(networkAddress, maskBitset);
    std::cout << "Broadcast Address: ";
    printDecimalFormat(broadcastAddress);
    
    return 0;
}