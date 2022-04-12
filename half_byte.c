#include <stdio.h>
#include "public_def.h"

#define ONE_STEP_MV_BIT_NUM 4
#define BIT_NUM_IN_ONE_BYTE 8
#define BIT_NUM(X) sizeof(X) * BIT_NUM_IN_ONE_BYTE

INT32S main(INT32S argc, INT8S **argv)
{
    INT32U num_arr[] = {1, 2, 3, 4, 5};
    INT32U ret = 0;
    INT32U maxMvBitNum = BIT_NUM(ret);
    for (INT32U i = 0; i < ITEM_OF(num_arr) ; i++) {
        INT32U mvBitNum = ONE_STEP_MV_BIT_NUM * i;
        if (mvBitNum > maxMvBitNum) {
            break;
        }
        ret |= (num_arr[i] << mvBitNum);
    }
    printf("ret = %#lx\n", ret);
    return 0;
}
