//
// Created by demon on 2019/5/31.
//

#include "State.h"
#include "Context.h"
State::State() {
}

State::~State() {

}

void State::changeState(Context *context, State *state) {
    context->changeState(state);
}
