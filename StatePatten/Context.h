//
// Created by demon on 2019/5/31.
//

#ifndef MYAPP_CONTEXT_H
#define MYAPP_CONTEXT_H

#include"State.h"
class Context {
public:
    Context();

    virtual ~Context();
    void request();
private:
    friend class State;
    void changeState(State*state);

    State*state_;
    int statue_;
};


#endif //MYAPP_CONTEXT_H
