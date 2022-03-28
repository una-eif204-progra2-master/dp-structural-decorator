//
// Created by Maikol Guzman Alan on 3/27/22.
//

#include "SeasonProduct.h"

SeasonProduct::SeasonProduct(const Product &product) : product(product) {}

SeasonProduct::~SeasonProduct() {

}

const Product &SeasonProduct::getProduct() const {
    return product;
}

const string &SeasonProduct::getSeasonName() const {
    return seasonName;
}

void SeasonProduct::setSeasonName(const string &seasonName) {
    SeasonProduct::seasonName = seasonName;
}

ostream &operator<<(ostream &os, const SeasonProduct &product) {
    os << product.product << " seasonName: "
       << product.seasonName;
    return os;
}
