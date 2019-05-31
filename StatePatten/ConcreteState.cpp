//
// Created by demon on 2019/5/31.
//

#include <iostream>
#include "ConcreteState.h"

void ConcreteState::handle() {
    std::cout<<"ConcreteState::handle()"<<std::endl;
}

ConcreteState::ConcreteState() = default;

ConcreteState::~ConcreteState() = default;
