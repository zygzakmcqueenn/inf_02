#include <iostream>
#include <bitset>

int main() {
    std::string ip;
    int mask;

    cout << "Obliczanie ip";
    system("pause")
    std::cout << "Podaj adres IP: ";
    std::cin >> ip;
    std::cout << "Podaj maske sieci (w postaci skroconej): ";
    std::cin >> mask;


    int ip_parts[4];
    sscanf(ip.c_str(), "%d.%d.%d.%d", &ip_parts[0], &ip_parts[1], &ip_parts[2], &ip_parts[3]);


    int full_mask = (0xFFFFFFFF << (32 - mask)) & 0xFFFFFFFF;

   
    int network_address[4];
    int broadcast_address[4];
    for (int i = 0; i < 4; ++i) {
        network_address[i] = ip_parts[i] & (full_mask >> (24 - i*8));
        broadcast_address[i] = network_address[i] | (~full_mask >> (24 - i*8) & 255);
    }

 
    std::cout << "Adres sieci: " << network_address[0] << "." << network_address[1] << "." << network_address[2] << "." << network_address[3] << "\n";
    std::cout << "Adres rozgloszeniowy: " << broadcast_address[0] << "." << broadcast_address[1] << "." << broadcast_address[2] << "." << broadcast_address[3] << "\n";

    return 0;
}
