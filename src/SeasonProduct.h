//
// Created by Maikol Guzman Alan on 3/27/22.
//

#ifndef DATAFLOW_TEXTFILES_01_SEASONPRODUCT_H
#define DATAFLOW_TEXTFILES_01_SEASONPRODUCT_H


#include <ostream>
#include "Product.h"

class SeasonProduct : Product {
private:
    const Product& product;
    string seasonName;
public:
    SeasonProduct(const Product &product);

    virtual ~SeasonProduct();

    const Product &getProduct() const;

    const string &getSeasonName() const;

    void setSeasonName(const string &seasonName);

    friend ostream &operator<<(ostream &os, const SeasonProduct &product);
};


#endif //DATAFLOW_TEXTFILES_01_SEASONPRODUCT_H
