//
// Created by demon on 2019/5/31.
//

#include "Context.h"
#include "ConcreteState.h"
Context::Context():statue_(0) {
    this->state_ = new ConcreteState();

}

Context::~Context() {

}

void Context::changeState(State*state) {

    this->state_=state;
}
void Context::request() {
    state_->handle(this);
}