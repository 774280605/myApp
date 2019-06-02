//
// Created by demon on 2019/6/2.
//

#ifndef MYAPP_TARGET_H
#define MYAPP_TARGET_H


class Target {
public:
    Target();

    virtual ~Target();

    virtual void request()=0;
};


#endif //MYAPP_TARGET_H
