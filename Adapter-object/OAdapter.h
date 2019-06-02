//
// Created by demon on 2019/6/2.
//

#ifndef MYAPP_OADAPTER_H
#define MYAPP_OADAPTER_H

#include "OTarget.h"
#include "OAdaptee.h"
class OAdapter: public OTarget {
public:
    OAdapter(OAdaptee*oAdaptee);

    virtual ~OAdapter();


    virtual void request() override;

private:
    OAdaptee* oAdaptee_;
};


#endif //MYAPP_OADAPTER_H
