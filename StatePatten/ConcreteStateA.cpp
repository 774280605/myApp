//
// Created by demon on 2019/5/31.
//

#include <iostream>
#include "ConcreteStateA.h"

void ConcreteStateA::handle(Context *context) {
    std::cout<<"ConcreteStateA::handle()"<<std::endl;
}

ConcreteStateA::ConcreteStateA() {
}

ConcreteStateA::~ConcreteStateA() {

}
