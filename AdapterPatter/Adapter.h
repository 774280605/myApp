//
// Created by demon on 2019/6/2.
//

#ifndef MYAPP_ADAPTER_H
#define MYAPP_ADAPTER_H


#include "Target.h"
#include "Adaptee.h"
class Adapter: public Target, public Adaptee {
public:
    Adapter();

    virtual ~Adapter();

    virtual void specificRequest() override;

    virtual void request() override;
};


#endif //MYAPP_ADAPTER_H
