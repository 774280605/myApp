#include <iostream>
#include "StatePatten/Context.h"
#include "AdapterPatter/Adapter.h"
#include "Adapter-object/OAdapter.h"
void testStatePattern(){
    Context* context = new Context;
    context->request();
    context->request();
}

void testAdapterPattern(){
    Target* target = new Adapter;
    target->request();
}
void testAdapterPatternobj(){
    OTarget* oTarget = new OAdapter(new OAdaptee);
    oTarget->request();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    //testStatePattern();
    testAdapterPatternobj();
    return 0;
}