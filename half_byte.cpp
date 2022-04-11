#include <iostream>
#include "public_def.h"

using namespace std;

VOS_INT32 main(VOS_INT32 argc, VOS_INT8 **argv)
{
    const VOS_UINT32 SIZE = 2;
    const VOS_UINT32 STEP = 4;
    VOS_UINT32 num_arr[SIZE] = {1, 2};
    VOS_UINT8 ret = 0;
    for (VOS_UINT32 i = 0; i < SIZE; i++) {
        ret |= (num_arr[i] << (STEP * i));
    }
    printf("ret = %#hx\n", ret);
    return 0;
}
