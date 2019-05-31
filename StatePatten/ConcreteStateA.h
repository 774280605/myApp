//
// Created by demon on 2019/5/31.
//

#ifndef MYAPP_CONCRETESTATEA_H
#define MYAPP_CONCRETESTATEA_H


#include "State.h"

class ConcreteStateA: public State {
public:
    ConcreteStateA();

    virtual ~ConcreteStateA();

public:
    virtual void handle(Context *context) override;
};


#endif //MYAPP_CONCRETESTATEA_H
