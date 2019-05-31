//
// Created by demon on 2019/5/31.
//

#ifndef MYAPP_STATE_H
#define MYAPP_STATE_H


class State {
public:
    State();

    virtual ~State();

    virtual void handle()=0;
};


#endif //MYAPP_STATE_H
