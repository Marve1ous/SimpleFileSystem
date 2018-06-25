#ifndef __DEFINE__
    #define __DEFINE__
    #define BLOCK_SIZE 1024
    #define BLOCK_NUMS 1024
    #define FAT_ITEM_SIZE 2
    #define FAT_ITEM_NUM 1024
    #define FCB_SIZE 24
    #define FCB_BLOCK 2
    #define FCB_ITEM_NUM 42
    #define FAT1_LOCATON BLOCK_SIZE*1
    #define FAT2_LOCATON BLOCK_SIZE*3
    #define DATA_LOCATION BLOCK_SIZE*6
    #define ROOT_FCB_LOCATION 5
    #define FILE_NAME_LEN 11
    #define MAX_FD_NUM 10
    #define FREE 0
    #define USED 1
    #define END_OF_FILE -1
#endif