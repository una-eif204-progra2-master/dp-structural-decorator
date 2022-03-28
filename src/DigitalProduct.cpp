//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "DigitalProduct.h"

DigitalProduct::DigitalProduct() {}

DigitalProduct::~DigitalProduct() {

}

const string &DigitalProduct::getFilePath() const {
    return filePath;
}

void DigitalProduct::setFilePath(const string &filePath) {
    DigitalProduct::filePath = filePath;
}

ostream &operator<<(ostream &os, const DigitalProduct &product) {
    os << static_cast<const Product &>(product) << " filePath: " << product.filePath;
    return os;
}
