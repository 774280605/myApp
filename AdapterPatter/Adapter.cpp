//
// Created by demon on 2019/6/2.
//

#include <iostream>
#include "Adapter.h"

void Adapter::specificRequest() {
    std::cout<<"specificRequest";
}

void Adapter::request() {
    this->specificRequest();
}

Adapter::Adapter() {
}

Adapter::~Adapter() {

}
