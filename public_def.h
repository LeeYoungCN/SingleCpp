#ifndef PUBLIC_DEF_H
#define PUBLIC_DEF_H

#define INT32U unsigned int
#define INT32S          int
#define INT16U unsigned short
#define INT16S          short
#define INT8U  unsigned char
#define INT8S           char

#define ITEM_OF(array) (INT32U)(sizeof(array)/sizeof(array[0]))

#endif // PUBLIC_DEF_H
