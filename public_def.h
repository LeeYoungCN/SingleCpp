#ifndef PUBLIC_DEF_H
#define PUBLIC_DEF_H

#define VOS_UINT32 unsigned int
#define VOS_INT32           int
#define VOS_UINT8  unsigned char
#define VOS_INT8            char

#define ITEM_OF(array) (VOS_UINT32)(sizeof(array)/sizeof(array[0]))

#endif // PUBLIC_DEF_H
