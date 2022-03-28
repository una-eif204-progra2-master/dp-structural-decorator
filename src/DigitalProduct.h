//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_SRP_DIGITALPRODUCT_H
#define SOLID_01_SRP_DIGITALPRODUCT_H


#include <ostream>
#include "Product.h"

class DigitalProduct: public Product {
private:
    string filePath;
public:
    DigitalProduct();

    virtual ~DigitalProduct();

    const string &getFilePath() const;

    void setFilePath(const string &filePath);

    friend ostream &operator<<(ostream &os, const DigitalProduct &product);
};


#endif //SOLID_01_SRP_DIGITALPRODUCT_H
