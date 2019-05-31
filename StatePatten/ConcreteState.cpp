//
// Created by demon on 2019/5/31.
//

#include <iostream>
#include "ConcreteState.h"
#include "Context.h"
#include "ConcreteStateA.h"
void ConcreteState::handle(Context *context) {
    std::cout<<"ConcreteState::handle()"<<std::endl;
    changeState(context,new ConcreteStateA);
}

ConcreteState::ConcreteState() {

}



ConcreteState::~ConcreteState() = default;
