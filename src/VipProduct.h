//
// Created by Maikol Guzman Alan on 3/27/22.
//

#ifndef DATAFLOW_TEXTFILES_01_VIPPRODUCT_H
#define DATAFLOW_TEXTFILES_01_VIPPRODUCT_H

#include <ostream>
#include "Product.h"

class VipProduct : public Product {
private:
    const Product& product;
    bool vip;
public:

    VipProduct(const Product &product);

    virtual ~VipProduct();

    const Product &getProduct() const;

    bool isVip() const;

    void setVip(bool vip);

    friend ostream &operator<<(ostream &os, const VipProduct &product);
};


#endif //DATAFLOW_TEXTFILES_01_VIPPRODUCT_H
