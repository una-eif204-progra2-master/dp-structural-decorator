//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "PhysicalProduct.h"
#include "DigitalProduct.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)\n" << endl;

    try {
        /* initialize random seed: */
        srand (time(nullptr));
        int randomNumberV1 = rand() % 500;
        int randomNumberV2 = rand() % 59 + 100;

        PhysicalProduct physicalProduct;
        physicalProduct.setName("PS5 Game: call of duty");
        physicalProduct.setWeight(randomNumberV1);
        physicalProduct.setPrice(randomNumberV2);

        DigitalProduct digitalProduct;
        digitalProduct.setName("PS5 Game: Fifa");
        digitalProduct.setPrice(randomNumberV2);
        digitalProduct.setFilePath("My Docu");

        cout << "Physical Product: " << physicalProduct << endl;
        cout << "Digital Product: " << digitalProduct << endl;


    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}