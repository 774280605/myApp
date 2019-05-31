#include <iostream>
#include "StatePatten/Context.h"
void testStatePattern(){
    Context* context = new Context;
    context->request();
    context->request();
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    testStatePattern();
    return 0;
}