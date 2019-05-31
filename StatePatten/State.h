//
// Created by demon on 2019/5/31.
//

#ifndef MYAPP_STATE_H
#define MYAPP_STATE_H



class Context;
class State {
public:
    State();

    virtual ~State();

    virtual void handle(Context *context) =0;
    virtual void changeState(Context*context,State*state);
};




#endif //MYAPP_STATE_H
