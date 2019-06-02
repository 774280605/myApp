//
// Created by demon on 2019/6/2.
//

#ifndef MYAPP_OTARGET_H
#define MYAPP_OTARGET_H


class OTarget {
public:
    OTarget();

    virtual ~OTarget();

    virtual void request()=0;
};


#endif //MYAPP_OTARGET_H
