//
// Created by 孙剑 on 2022/7/7.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "object.h"
#include "vm.h"

bool compile(const char * source, Chunk * chunk);

#endif //CLOX_COMPILER_H
