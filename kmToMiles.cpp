#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char* argv[]){
    std::cout << "Enter milles: " << std::endl;
    std::string sMiles;
    double dMilesConv = 1.60934;
    getline(std::cin, sMiles);
    double dMiles = std::stod(sMiles);
    double dKm = dMiles * dMilesConv;
       printf("%.3f miles are %.3f Kilometers \n", dMiles, dKm);

    return 0;
}
