//
// Created by demon on 2019/5/31.
//

#ifndef MYAPP_CONCRETESTATE_H
#define MYAPP_CONCRETESTATE_H


#include "State.h"

class ConcreteState : public State{
public:
    ConcreteState();

     ~ConcreteState()override ;

public:
    void handle() override;
};


#endif //MYAPP_CONCRETESTATE_H
