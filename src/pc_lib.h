/**
 * Copyright (c) 2014 NetEase, Inc. and other Pomelo contributors
 * MIT Licensed.
 */

#ifndef PC_LIB_H
#define PC_LIB_H

#include <stddef.h>

#include "pc_mutex.h"

extern void (*pc_lib_log)(int level, const char* msg, ...);
extern void* (*pc_lib_malloc)(size_t len);
extern void (*pc_lib_free)(void* data);
extern const char* pc_lib_platform_type;

const char* pc_lib_strdup(const char* str);

#endif