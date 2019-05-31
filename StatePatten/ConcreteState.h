//
// Created by demon on 2019/5/31.
//

#ifndef MYAPP_CONCRETESTATE_H
#define MYAPP_CONCRETESTATE_H


#include "State.h"
class Context;
class ConcreteState : public State{
public:
    ConcreteState();

     ~ConcreteState()override ;

public:
    void handle(Context *context) override;


};


#endif //MYAPP_CONCRETESTATE_H
