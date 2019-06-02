//
// Created by demon on 2019/6/2.
//

#include "OAdapter.h"

void OAdapter::request() {
    oAdaptee_->request();
}



OAdapter::~OAdapter() {

}

OAdapter::OAdapter(OAdaptee *oAdaptee):oAdaptee_(oAdaptee) {

}
