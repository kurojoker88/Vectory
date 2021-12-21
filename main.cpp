#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    using namespace vecmath;
    Vector vecs[5] = {{3, 3}, {1, -1}, {-4, 2}, {-3, -1}, {12.3, -0.9}};
    Vector *p = vecs;
    for (int i = 0; i < 5; i++){
        p -> report();
        p++;
    }

    return 0;
}

