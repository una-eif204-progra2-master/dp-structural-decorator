//
// Created by Maikol Guzman Alan on 3/27/22.
//

#include "VipProduct.h"

VipProduct::VipProduct(const Product &product) : product{product} {}

VipProduct::~VipProduct() {

}

const Product &VipProduct::getProduct() const {
    return product;
}

bool VipProduct::isVip() const {
    return vip;
}

void VipProduct::setVip(bool vip) {
    VipProduct::vip = vip;
}

ostream &operator<<(ostream &os, const VipProduct &product) {
    os << product.product << " vip: " << product.vip;
    return os;
}
