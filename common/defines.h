#pragma once

#define MAX_CONFIG_LINE_LENGTH 4096

#define BAIL_ON_ERROR(dwError) \
    do {                                                           \
        if (dwError)                                               \
        {                                                          \
            goto error;                                            \
        }                                                          \
    } while(0)

#define SAFE_FREE_MEMORY(pMemory) \
    do { \
        if (pMemory) { \
            coapi_free_memory(pMemory); \
        } \
    } while(0)

#define IsNullOrEmptyString(str) (!(str) || !(*str))
