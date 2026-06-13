#ifndef IPRODUCT_H
#define IPRODUCT_H

class IProduct {
public:
    virtual int getId() const = 0;
    virtual void display() const = 0;
    virtual ~IProduct() {}
};

#endif