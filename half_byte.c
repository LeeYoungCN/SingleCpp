#include <stdio.h>
#include "public_def.h"

#define ONE_STEP_MV_BIT_NUM 4
#define BIT_NUM_IN_ONE_BYTE 8
#define BIT_NUM(X) sizeof(X) * BIT_NUM_IN_ONE_BYTE

VOS_INT32 main(VOS_INT32 argc, VOS_INT8 **argv)
{
    VOS_UINT32 num_arr[] = {1, 2, 3, 4, 5};
    VOS_UINT32 ret = 0;
    VOS_UINT32 maxMvBitNum = BIT_NUM(ret);
    for (VOS_UINT32 i = 0; i < ITEM_OF(num_arr) ; i++) {
        VOS_UINT32 mvBitNum = ONE_STEP_MV_BIT_NUM * i;
        if (mvBitNum > maxMvBitNum) {
            break;
        }
        ret |= (num_arr[i] << mvBitNum);
    }
    printf("ret = %#lx\n", ret);
    return 0;
}
