//
// Created by demon on 2019/6/2.
//

#ifndef MYAPP_ADAPTEE_H
#define MYAPP_ADAPTEE_H


class Adaptee {
public:
    Adaptee();

    virtual ~Adaptee();

public:
    virtual void specificRequest()=0;
};


#endif //MYAPP_ADAPTEE_H
